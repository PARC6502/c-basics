#include <stdio.h>
#include <stdlib.h>

void main() {
    char i;
    FILE *fGreetings;
    fGreetings = fopen("greetings.txt", "r");
    // Exit if file doesn't exist
    if (fGreetings == NULL) {
        perror("There was an error opening the file");
        exit(EXIT_FAILURE);
    }
    fscanf(fGreetings, "%c", &i);
    printf("The first character of the file is %c\n", i);
    fclose(fGreetings);
}