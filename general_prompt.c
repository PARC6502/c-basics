#include <stdio.h>
#include <stdarg.h>

void gen_prompt(const char text[], const char *format, ...) {
    printf("%s", text);
    va_list args;
    va_start(args,format);
    vfscanf(stdin, format, args);
    va_end(args);
    return;
}


int main() {
    // Testing the general prompt
    float num;
    char str[24];
    gen_prompt("Enter a value: ", "%f", &num);
    printf("You entered: %f\n", num);
    gen_prompt("Enter your name (24 char max): ", "%s", &str);
    printf("You said your name is %s\n", str);
    return 0;
}