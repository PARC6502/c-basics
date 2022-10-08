#include <stdio.h>

int int_prompt(const char text[], int* x) {
    printf("%s", text);
    scanf("%d", x);
    return 0;
}

int main() {
    puts("This program returns the sum and product of two integer numbers");
    puts("");
    int num1, num2;
    int_prompt("Enter the first number: ", &num1);
    int_prompt("Enter the second number: ", &num2);
    printf("The sum is: %d\n", num1+num2);
    printf("The product is: %d", num1*num2);
    return 0;
}