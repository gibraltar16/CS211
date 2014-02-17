/* 
 * File:   main.c
 * Author: John
 *
 * Created on February 16, 2014, 8:30 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int INP, STOP;

    while (STOP != 1) {
        printf("Enter a project number: ");
        scanf("%f", &INP);

        switch (INP) {
            case 0:
                STOP = 1;
                break;
            case 1:
                project01();
                break;
            case 2:
                project02();
                break;
        }
    }
    return 0;
}