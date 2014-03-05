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
    char CHARS[36] = "abcdefghijklmnopqrstuvwxyz1234567890";                    // list of characters the program will look for
    char INP[100];                                                              // the 100 character user input
    int OPT = 1;                                                                // Handles the user input for options

    // Asks for the message
    printf("Enter a text message: ");
    scanf("%100[0-9a-zA-Z ]s", &INP);

    // Will work when the user selects 1 or 2. Anything else (i.e. "3") will close the program
    while (OPT == 1 || OPT == 2) {
        // Asks for a option to pick
        printf("Avaliable Choices: \n 1. Display number of occurrences of each letter\n 2. Print number of words in message\n 3. Quit\n");
        printf("Enter the number of your choice: ");
        scanf("%i", &OPT);
        printf("\n");

        if (OPT == 1) {                                                         // OPTION 1 - OCCURRENCES OF EACH LETTER
            for (int a = 0; a < strlen(CHARS); a++) {                           // 'a' FOREACH in CHARS
                int COUNT = 0;                                                  // used to count occurrences
                for (int i = 0; i <= strlen(INP); i++)                          // 'i' FOREACH in INP
                    if (tolower(INP[i]) == CHARS[a])
                        COUNT++;                                                // If lowercase INP matches CHARS, adds to COUNT
                if (COUNT > 0)
                    printf("%c: %i\n", CHARS[a], COUNT);                        // If more than 0, displays count
            }
        } else if (OPT == 2) {                                                  // OPTION 2 - COUNT WORDS
            int COUNT = 0;                                                      // used to count occurrences
            int INWORD = 0;                                                     // used as Boolean [0|1] to represent if the loop is already in a word
            for (int i = 0; i < strlen(INP); i++) {                             // 'i' FOREACH in INP
                if (INWORD == 0) {
                    // // You can do either one of these
                    // // Code Type 1
                    //for (int a = 0; a < strlen(CHARS); a++)
                    //    if (tolower(INP[i] == CHARS[a]))
                    //        INWORD = 1;                                       // If not in a word, checks if INP is in CHARS, then sets INWORD TRUE
                    // // Code type 2
                    if (!isspace(INP[i]))
                        INWORD = 1;                                             // If anything other than SPACE, INWORD is set to TRUE
                } else if (INWORD == 1) {
                    if (isspace(INP[i])) {
                        COUNT++;                                                // If INWORD is TRUE, adds to COUNT if cur INP is a space
                        INWORD = 0;                                             // Sets INWORD to false
                    }
                }
            }
            COUNT = COUNT + INWORD;                                             // When the INP ends with a letter, not a space, it counts the last word
            printf("The message contains %i words.\n", COUNT);                  // Displays count
        } else {
            break;                                                              // Stops program
        }
        printf("\n");
    }
}