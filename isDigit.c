/**
 * @file isDigit.c
 * @author Ibby
 * 
 * Testing isDigit...
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int isDigit(char);

int main() {
    int runAgain = 1;
    char c;
    char runChar;
    
    while(runAgain) {
        fflush(stdin);
        printf("Insert a char: ");
        c = getchar();
        if (isDigit(c))
            puts("It's a number");
        else
            puts("It's not a number");
        
        fflush(stdin);
        printf("Run program again? (Y/n) ");
        runChar = getchar();
        if (runChar == 'n' || runChar == 'N')
            runAgain = 0;
        else
            runAgain = 1;
        printf("\033[2J\033[H");
    }
    return 0;
}

int isDigit(char c)
{
    // ASCII integer representation of c
    int i = c;
    printf("The integer representation is: %d\n", i);
    // ASCII 48-57 are the numbers 0-9
    if (i >= 48 && i <= 57)
        return 1;
    else
        return 0;
}