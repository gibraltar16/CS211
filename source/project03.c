/* 
 * File:   project03.c
 * Author: John Untivero
 *
 * Created on February 23, 2014, 10:50 PM
 */

#include <stdio.h>
#include <stdlib.h>

int project03() {
    float Rate, CurrentYr;
    int Attempt = 0;

    while (Attempt >= 0) {
        Attempt++;
        // Get the initial population
        printf("Enter the initial egret population: ");
        scanf("%f", &CurrentYr);
        // Get the rate
        printf("Enter the rate: ");
        scanf("%f", &Rate);
        
        if (CurrentYr > 0 && CurrentYr < 1000000 && Rate > 0 && Rate < 4) {
            // If the user inputs valid numbers, the loop stops
            Attempt = -1;
        } else {
            if (Attempt == 2) {
                printf("You have run out of attempts");
                return 0;
            } else {
                printf("---\nInvalid Numbers, please try again.\nPopulation should be an integer between 0 and 1000000\nRate should be real number between 0 and 4\n---\n");
            }
        }
    }
    printf("Year    Population\n----    ----------");
    // Loop
    for (int i = 0; i <= 25; i++) {
        printf("\n  %i     %i", i, (int)CurrentYr);
        // Replaces CurrentYr with the next year's value
        CurrentYr = Rate * CurrentYr * (1 - ((float) CurrentYr / 1000000));
    }
    return 0;
}

