/* 
 * File:   main.c
 * Author: John Untivero
 *
 * Created on February 3, 2014, 4:44 PM
 */
m
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float high, inp;
    int stop = 0;
    while (stop == 0) {
        printf("Enter a number: ");
        scanf("%f", &inp);
        if (inp < 0)
            printf("Not a valid number\n");
        else if (inp == 0)
            stop = 1;
        else if (inp > high)
            high = inp;
    }
    printf("Highest Number: %.2F\n", high);
    return (EXIT_SUCCESS);
}

