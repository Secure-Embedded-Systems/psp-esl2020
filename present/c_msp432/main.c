#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include <stdio.h>
#include <stdlib.h>
#include "cells.h"
#include "present.h"

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


    /*** PRESENT ***/
    MDTYPE clk = 0;
    MDTYPE odat[64];
    MDTYPE idat[64];
    long long int idat_dir = 0;
    MDTYPE key[80];
    long long int key_dir[2];
    MDTYPE load;
    int i, j;
    long long int tmp;
    int cycles [10];
    int meanCycle = 0;

    key_dir[0] = 0;
    key_dir[1] = 0;

    // bitslice key
    for (j=0 ; j<64 ; j++){
        tmp = (key_dir[0] >> j) & 1;
        if (tmp == 0)  {
            key[j] = 0;
        } else if (tmp == 1)  {
            key[j] = 0xffffffff;
        }
    }
    for (j=0 ; j<16 ; j++){
        tmp = (key_dir[1] >> j) & 1;
        if (tmp == 0)  {
            key[j+64] = 0;
        } else if (tmp == 1)  {
            key[j+64] = 0xffffffff;
        }
    }

    // bitslice the pt
    for (j=0 ; j<64 ; j++){
        tmp = (idat_dir >> j) & 1;
        if (tmp == 0)  {
            idat[j] = 0;
        } else if (tmp == 1)  {
            idat[j] = 0xffffffff;
        }
    }

    for (i=0; i<10; i++) {
        TimerLap();

        // load inputs:
        PRESENT_ENCRYPT(odat, idat, key, 0xffffffff, clk);

        // run the cipher:
        for (j=0; j<32; j++) {
            PRESENT_ENCRYPT(odat, idat, key, 0, clk);
        }

        cycles[i] = TimerLap();
    }

    for (i=0; i<10; i++) {
        printf("cycles = %4d \n", cycles[i]);
        meanCycle = meanCycle + cycles[i];
    }
    meanCycle = meanCycle/10;
    printf("mean cycle = %d\n", meanCycle);


    for (i=63 ; i>=0 ; i--) {
        printf("%1x", (odat[i]&0x80000000)>>31);
    }
    printf("\n");


    // correct: 0101010101111001110000010011100001111011001000101000010001000101 (5579C138 7B228445)




    return 0;
}
