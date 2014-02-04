/* 
 * File:   main.c
 * Author: John Untivero
 *
 * Created on February 3, 2014, 4:44 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    // Create the FLOAT variables for the HIGHEST and INPUT values
    float high, inp;
    // Create the int variable for STOP | 0 - False | 1 - True
    int stop = 0;

    // While STOP is [FALSE | 0]
    while (stop == 0) {
        // Asks and gets the input number
        printf("Enter a number: ");
        scanf("%f", &inp);

        // Specific tasks depending on the input
        if (inp < 0)
            // If it is negative
            printf("Not a valid number\n");
        else if (inp == 0)
            // If the input is 0, stop the loop
            stop = 1;
        else if (inp > high)
            // If the input is highest, set the highest to the input
            high = inp;
    }
    // Display the highest numbers
    printf("Highest Number: %.2F\n", high);

    return (EXIT_SUCCESS);
}

