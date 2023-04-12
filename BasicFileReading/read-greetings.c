#include <stdio.h>
#include <stdlib.h>

FILE * openFile();
void lineByLine(FILE *);
void charByChar(FILE *);
void stripSpace(FILE *);
void countLines(FILE *);

int main() {
    FILE *fGreetings;
    fGreetings = openFile();
    // Exit if file doesn't exist
    if (fGreetings == NULL) {
        perror("There was an error opening the file");
        exit(EXIT_FAILURE);
    }
    lineByLine(fGreetings);
    // charByChar(fGreetings);
    // stripSpace(fGreetings);
    // countLines(fGreetings);
    fclose(fGreetings);
    return 0;
}

FILE * openFile() {
    FILE *fP;
    fP = fopen("greetings.txt", "r");
    return fP;
}

/**
 * @brief Print each line of the file individually
 * 
 */
void lineByLine(FILE * fP) {
    char buff[255];
    int count = 1;
    // Print each line until you get to end of file
    do {
        fgets(buff,255, (FILE *)fP);
        printf("%d: %s", count, buff);
        count++;
    } while (!feof(fP));
}

/**
 * @brief Print each character separated by a comma
 * 
 */
void charByChar(FILE * fP) {
    char c;
    while (!feof(fP)) {
        c = fgetc(fP);
        printf("%c", c);
        if(c!='\n') {
            printf(", ");
        }
    }
    printf("\n");
}

/**
 * @brief Print contents of file without any spaces or new lines.
 *  
 */
void stripSpace(FILE * fP) {
    char c;
    // Loop until you get to end of file
    while (!feof(fP)) {
        c = fgetc(fP);
        if(c!='\n' && c!=' ') {
            printf("%c", c);
        }
    }
    printf("\n");    
}

/**
 * @brief Count number of lines in the file
 * 
 */
void countLines(FILE * fP) {
    char buff[255];
    int count = 0;
    // Loop until end of file
    while (!feof(fP)) {
        // printf("%d: %s", count, buff);
        fgets(buff,255, (FILE *)fP);
        count++;
    }
    printf("There are %d greetings.", count);
}