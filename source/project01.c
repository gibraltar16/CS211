/* 
 * File:   project01.c
 * Author: John Untivero
 *
 * Created on February 3, 2014, 4:44 PM
 */

#include <stdio.h>
#include <stdlib.h>

int project01() {
    // Create the FLOAT variables for the HIGHEST and INPUT values
    // Create the variable for STOP | 0 - False | 1 - True
    float HIGH, INP, STOP;

    // Gives the instructions
    printf("Entering 0 will terminate the sequence of the input value.\n");

    // While STOP is not 1
    while (STOP != 1) {
        // Asks and gets the input number
        printf("Enter a number: ");
        scanf("%f", &INP);
        //scanf("Enter a number: %f", &inp);

        if (INP == 0) {
            printf("\nYour largest number was %.2F.", HIGH);
            STOP = 1;
        } else if (INP > HIGH || HIGH == 0) {
            HIGH = INP;
        } else if (INP < 0) {
            printf("Invalid Number\n");
            STOP = 1;
        }
    }
    return 0;
}

