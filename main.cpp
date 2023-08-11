/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */
//mbed error message; mutex 0x20000380, not allowed in ISR context
//because of incorrect addresses and printf
#include "mbed.h"


DigitalOut led1(LED1);
InterruptIn bttn(PC_13);


void bttn_interrupt(){
    printf("buttn pressed \r\n");
}
int main()
{
    bttn.fall(&bttn_interrupt);


    while (true)
    {
       
    }
}