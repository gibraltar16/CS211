/* 
 * File:   project04.c
 * Author: John
 *
 * Created on March 4, 2014, 11:30 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    char UPPER[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char LOWER[26] = "abcdefghijklmnopqrstuvwxyz";
    char INPUT[100];
    int DATA[28];
    int OPTION = 1;
    int i, x, y, z;

    int CONTINUE = 0;
    while (CONTINUE == 0) {
        printf("Enter a text message: ");
        INPUT[0] == "";
        scanf("%100[a-zA-Z ]s", INPUT);
        for (i = 0; i < 26; i++)
            if (INPUT[0] == UPPER[i] || INPUT[0] == LOWER[i])
                CONTINUE = 1;
        if (CONTINUE == 0)
            printf("Please enter a message, at least one character long.\n");
    }

    for (i = 0; i <= 26; i++)
        DATA[i] = 0;
    for (x = 0; x < 26; x++)
        for (i = 0; INPUT[i] != NULL && i < 100; i++)
            if (INPUT[i] == UPPER[x] || INPUT[i] == LOWER[x])
                DATA[x]++;
    int INWORD = 0;
    for (i = 0; INPUT[i] != NULL && i < 100; i++) {
        if (INWORD == 0 && INPUT[i] != ' ') {
            INWORD = 1;
        } else if (INWORD == 1 && INPUT[i] == ' ') {
            DATA[26]++;
            INWORD = 0;
        }
    }
    DATA[26] += INWORD;

    while (OPTION == 1 || OPTION == 2) {
        printf("\nAvaliable Choices: \n 1. Display number of occurrences of each letter\n 2. Print number of words in message\n 3. Quit\nEnter the number of your choice: ");
        scanf("%i", &OPTION);
        printf("\n");

        if (OPTION == 1) {
            for (i = 0; i < 26; i++)
                if (DATA[i] > 0)
                    printf("%c: %i\n", LOWER[i], DATA[i]);
        } else if (OPTION == 2) {
            printf("The message contains %i words.\n", DATA[26]);
        } else {
            break;
        }
        printf("\n");
    }
    return 0;
}