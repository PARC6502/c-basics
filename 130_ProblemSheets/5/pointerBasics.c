// Declare an integer variable and initialise it to 10. Declare an integer pointer variable.
// Using the pointer, perform some mathematical function eg multiply it by 10, or add a number to it.
// Print the contents using the variable pointer and the variable itself.

/**
 * @brief This program demonstrates the basics of pointers
 * @author Ibby EL-Serafy (parc6502)
 * @date 2023-02-17
 */

#include <stdio.h>



int main(void) {
    // Declare an integer variable
    int x = 10;
    // Declare an integer pointer variable
    int *xPtr;

    // Store the address of x in xPtr
    xPtr = &x;

    // Use the pointer to multiply x by 10
    *xPtr = *xPtr * 10;

    // Don't forget to add a newline character to the end of your printf statements
    printf("The value of x is %d\n",x);
    // Q: How do you printf a pointer?
    // A: You can't. You need to dereference it first.
    // Q: How do you dereference a pointer?
    // A: You use the * operator.
    printf("The value of xPtr is %d",*xPtr);
}
