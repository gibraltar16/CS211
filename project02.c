/* 
 * File:   project02.c
 * Author: John
 *
 * Created on February 16, 2014, 8:03 PM
 */

#include <stdio.h>
#include <stdlib.h>

int project02() {

    float HIGH, LOW, INP, STOP;

    printf("Entering 0 will terminate the sequence of the input value.\n");

    while (STOP != 1) {

        // Asks and retrieves the number input
        printf("Enter a number: ");
        scanf("%f", &INP);

        if (INP == 0) {
            // Displays highest and lowests; Sets STOP to 1 to end loop;
            printf("\nYour largest number was %.3F. ", HIGH);
            printf("Your smallest number was %.3F.", LOW);
            STOP = 1;
        } else if (INP > HIGH || HIGH == 0) {
            // Set HIGH to INP if INP is higher or if HIGH is 0
            HIGH = INP;
        } else if (INP < LOW || LOW == 0) {
            // Set LOW to INP if INP is less or if LOW is 0
            LOW = INP;
        }
    }
    return 0;
}

