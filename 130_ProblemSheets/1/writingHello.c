#include <stdio.h>

int main() {
    FILE *hello;
    hello = fopen("hello.txt", "w");
    fprintf(hello, "%s", "Hello World!\n");
    fclose(hello);
    return 0;
}