/* 
 * File:   project04.c
 * Author: John
 *
 * Created on March 1, 2014, 1:19 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    char CHARS[36] = "abcdefghijklmnopqrstuvwxyz1234567890";
    char INP[100];
    int OPT = 1;

    // Asks for the message
    printf("Enter a text message: ");
    scanf("%100[0-9a-zA-Z ]s", &INP);
    while (OPT == 1 || OPT == 2) {
        // Asks for a option to pick
        printf("Avaliable Choices: \n 1. Display number of occurrences of each letter\n 2. Print number of words in message\n 3. Quit\n");
        printf("Enter the number of your choice: ");
        scanf("%i", &OPT);
        printf("\n");
        if (OPT == 1) {
            // Count Letters - 'a' for alphabet index
            for (int a = 0; a < strlen(CHARS); a++) {
                int Count = 0;
                for (int i = 0; i <= strlen(INP); i++)
                    if (tolower(INP[i]) == CHARS[a])
                        Count++;
                if (Count > 0)
                    printf("%c: %i\n", CHARS[a], Count);
            }
        } else if (OPT == 2) {
            int COUNT = 0;
            int INWORD = 0;
            for (int i = 0; i < strlen(INP); i++) {
                if (INWORD == 0) {
                    for (int a = 0; a < strlen(CHARS); a++)
                        if (tolower(INP[i] == CHARS[a]))
                            INWORD = 1;
                } else if (INWORD == 1) {
                    if (isspace(INP[i])) {
                        COUNT++;
                        INWORD = 0;
                    }
                }
            }
            COUNT = COUNT + INWORD;
            printf("The message contains %i words.\n", COUNT);
        } else {
            break;
        }
        printf("\n");
    }
}