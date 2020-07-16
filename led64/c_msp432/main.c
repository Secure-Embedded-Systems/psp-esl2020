#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include <stdio.h>
#include <stdlib.h>
#include "cells.h"
#include "led64.h"


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


    /**** led64 ****/

    int clk = 0;
    int rst = 0;
    int Plaintext [64];
    int Key [64];
    int Ciphertext [64];
    int done;

    int cycles[10];
    int meanCycle = 0;
    int i;
    for (i=0 ; i<64 ; i++){
        Plaintext[i] = 0;
        Key[i] = 0;
    }

    for (i=0 ; i<10 ; i++) {
        TimerLap();
        rst = 0xffffffff;
        LED64Enc(clk, rst, Plaintext, Key, Ciphertext, &done); // initialize

        rst = 0;
        while (done!=0xffffffff) {
            LED64Enc(clk, rst, Plaintext, Key, Ciphertext, &done);
        }
        cycles[i] = TimerLap();
     }
     for (i=0; i<10; i++) {
         printf("cycles = %4d \n", cycles[i]);
         meanCycle = meanCycle + cycles[i];
     }
     meanCycle = meanCycle/10;
     printf("mean cycle = %d\n", meanCycle);

    // correct: 39C2401003A0C798"
    for (i=63 ; i>=0 ; i--) {
        printf("%1x", (Ciphertext[i]&0x80000000)>>31);
    }
    printf("\n");



    return 0;
}
