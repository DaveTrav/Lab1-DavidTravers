/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */
//mbed error message; mutex 0x20000380, not allowed in ISR context
//because of incorrect addresses and printf
//The reason using a flag variable in the interrupt function and then resetting it in the 'while' loop may not work as expected is due to potentian race conditions
//If the while loop reads the flag at the same time it's being modified in the interrupt function, it can lead to unexpected behavior.
//to avoid this issue you can disable interrupts while modifying the flag and while checking it in the 'while' loop.

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
