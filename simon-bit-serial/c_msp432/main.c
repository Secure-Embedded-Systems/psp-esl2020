#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include <stdio.h>
#include <stdlib.h>
#include "cells.h"
#include "simon_serial.h"


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

  /* simon bit-serial */
      int clk = 1;
      int pt[128];
      int key[128];
      int ct[128];
      long long int pt_dir[2];
      int i, j;
      long long int tmp;
      unsigned long long int key_dir[68];
      int cycles [10];
      int data_in;
      int data_rdy[2];
      int cipher_out;
      int valid;
      valid = 0;
      cipher_out = 0xffff;

      pt_dir[0] = 0x6c6c657661727420;
      pt_dir[1] = 0x6373656420737265;

//      pt_dir[0] = 0xa080f1ea63e65b37;
//      pt_dir[1] = 0x9f8e9892959afeee;

      // generate key
      key_dir[0] = 0x0706050403020100;
      key_dir[1] = 0x0f0e0d0c0b0a0908;
//      key_dir[0] = 0x9fa45d04aa7a2ab7;
//      key_dir[1] = 0xd2427fba047e7fdc;

      // bitslice key
      for (j=0 ; j<64 ; j++){
        tmp = (key_dir[0] >> j) & 1;
        if (tmp == 0)  {
          key[j] = 0;
        } else if (tmp == 1)  {
          key[j] = 0xffffffff;
        }
      }
      for (j=0 ; j<64 ; j++){
        tmp = (key_dir[1] >> j) & 1;
        if (tmp == 0)  {
          key[j+64] = 0;
        } else if (tmp == 1)  {
          key[j+64] = 0xffffffff;
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
      for (i=0; i<10; i++) {
          TimerLap();

          // reset
          data_rdy[0] = 0;
          data_rdy[1] = 0;
//          TimerLap();
          simon_ser(clk, 0, data_in, data_rdy, &cipher_out, &valid);
//          cycles[i] = TimerLap();

          //send pt
          data_rdy[0] = -1;
          data_rdy[1] = 0;
          for (j=0 ; j<128 ; j++) {
              data_in = pt[j];
              simon_ser(clk, -1, data_in, data_rdy, &cipher_out, &valid);
          }

          //send key
          data_rdy[0] = 0;
          data_rdy[1] = -1;
          for (j=0 ; j<128 ; j++) {
              data_in = key[j];
              simon_ser(clk, -1, data_in, data_rdy, &cipher_out, &valid);
          }

          //run
          data_rdy[0] = -1;
          data_rdy[1] = -1;
          while (valid==0) {
              simon_ser(clk, -1, data_in, data_rdy, &cipher_out, &valid);
              ct[0] = cipher_out;
          }

          // read output
          for (j=1 ; j<128 ; j++) {
              ct[j] = cipher_out;
              simon_ser(clk, -1, data_in, data_rdy, &cipher_out, &valid);
          }


          cycles[i] = TimerLap();
      }
      for (i=0; i<10; i++) {
          printf("cycles = %4d \n", cycles[i]);
      }
      // correct: 49681b1e1e54fe3f65aa832af84e0bbc
      for (j=127 ; j>=0 ; j--) {
          printf("%1x", (ct[j]&0x80000000)>>31);
      }



    return 0;
}
