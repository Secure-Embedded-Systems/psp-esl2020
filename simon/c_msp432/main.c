#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include <stdio.h>
#include <stdlib.h>
#include "cells.h"
#include "simon_clk.h"
#include "simon_key2.h"


unsigned TimerLap() {
    static unsigned int previousSnap;
    unsigned int currentSnap, ret;
    currentSnap = Timer32_getValue(TIMER32_0_BASE);
    ret = (previousSnap - currentSnap);
    previousSnap = currentSnap;
    return ret;
}

int main(void) {

    // Timer Initialization
    Timer32_initModule(TIMER32_0_BASE,
                       TIMER32_PRESCALER_1,
                       TIMER32_32BIT,
                       TIMER32_FREE_RUN_MODE);
    Timer32_startTimer(TIMER32_BASE, false);

    /* simon_clk  with offline bs key schedule */
       int clk = 1;
       int done;
       int done_key;
       int pt[128];
       int key[64];
       int ct[128];
       long long int pt_dir[2];
       int i, j;
       long long int tmp;
       unsigned long long int key_dir[68];
       int encNdec;
       long long int keyRound;
       int inLeft[64];
       int inRight[64];
       int cycles [10];
       int meanCycle = 0;

       pt_dir[0] = 0x6c6c657661727420;
       pt_dir[1] = 0x6373656420737265;

       // generate key
       key_dir[0] = 0x0706050403020100;
       key_dir[1] = 0x0f0e0d0c0b0a0908;

       // bitslice key
       for (j=0 ; j<64 ; j++){
         tmp = (key_dir[0] >> j) & 1;
         if (tmp == 0)  {
           inRight[j] = 0;
         } else if (tmp == 1)  {
           inRight[j] = 0xffffffff;
         }
       }
       for (j=0 ; j<64 ; j++){
         tmp = (key_dir[1] >> j) & 1;
         if (tmp == 0)  {
           inLeft[j] = 0;
         } else if (tmp == 1)  {
           inLeft[j] = 0xffffffff;
         }
       }

       // bitslice the pt
       for (j=0 ; j<64 ; j++){
         tmp = (pt_dir[0] >> j) & 1;
         if (tmp == 0)  {
           pt[j] = 0;
         } else if (tmp == 1)  {
           pt[j] = 0xffffffff;
         }
         tmp = (pt_dir[1] >> j) & 1;
         if (tmp == 0)  {
           pt[j+64] = 0;
         } else if (tmp == 1)  {
           pt[j+64] = 0xffffffff;
         }
       }

       // run enc
       encNdec = 0xffffffff;
       for (i=0; i<10; i++) {
   //        TimerLap();
           // reset
           TimerLap();
           simon(clk, 0xffffffff, encNdec, pt, key, &done, ct);
           simon_key(clk, 0xffffffff, &inLeft[0], &inRight[0], key, &done_key);
   //        cycles[i] = TimerLap();
           // run

           while(done==0) {
               // call simon round
               simon(clk, 0, encNdec, pt, key, &done, ct);
               simon_key(clk, 0, inLeft, inRight, key, &done_key);
           }
           cycles[i] = TimerLap();
       }
       for (i=0; i<10; i++) {
           printf("cycles = %4d \n", cycles[i]);
           meanCycle = meanCycle + cycles[i];
       }
       meanCycle = meanCycle/10;
       printf("mean cycle = %d\n", meanCycle);
       
       // correct: 49681b1e1e54fe3f65aa832af84e0bbc
       for (i=127 ; i>=0 ; i--) {
           printf("%1x", (ct[i]&0x80000000)>>31);
       }
       printf("\n");


    return 0;
}
