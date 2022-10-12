/**
 * @file prompt.h
 * @author Ibby/parc6502 (theibbster@proton.me)
 * @brief Header file with functions related to getting user prompts
 * @version 0.1
 * @date 2022-10-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdarg.h>

/**
 * @brief Prompts a user for input and scan that input in a single function
 * 
 * @param text[in] The prompt text 
 * @param format[in] A control character (%f, %c, etc), the format of the user's input
 * @param ... A pointer to the variable that will store the user's input
 */
void gen_prompt(const char text[], const char *format, ...) {
    printf("%s", text);
    va_list args;
    va_start(args,format);
    vfscanf(stdin, format, args);
    va_end(args);
    return;
}

// int main() {
//     // Testing the general prompt
//     float num;
//     char str[24];
//     gen_prompt("Enter a value: ", "%f", &num);
//     printf("You entered: %f\n", num);
//     gen_prompt("Enter your name (24 char max): ", "%s", &str);
//     printf("You said your name is %s\n", str);
//     return 0;
// }