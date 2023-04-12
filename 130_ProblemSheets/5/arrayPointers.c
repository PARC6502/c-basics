// Input 5 integer values from the keyboard and store these in an array, using array indexing.
// Create a pointer that points to the array.
// Write a table to the screen:
// * the first column containing the memory addresses of the array elements printed via the pointer
// * the second column containing the memory addresses of the array elements printed via the array name
// * the third column containing the contents of the array printed via the pointer

/**
 * @brief Program that demonstrates the use of pointers with arrays
 * @author Ibby EL-Serafy (parc6502)
 */

#include <stdio.h>

void main()
{
    // Declare an array of 5 integers
    int myArr[5];
    // Create a pointer that points to the array
    int *myArrPtr = myArr;

    // Print the memory address of the pointer using the pointer var and array var
    printf("The memory address of myArr is %p\n", (void *)myArr);
    printf("The memory address of myArrPtr is %p\n", (void *)myArrPtr);
    // They produce the same result

    // Get 5 integers from the user and store them in the array
    for (int i = 0; i < 5; i++)
    {
        printf("Enter an integer: ");
        scanf("%d", &myArrPtr[i]);
    }

    // Table header
    printf("| %-30s| %-30s| %-30s|\n", "Ptr Adress", "Arr Address", "Value");
    // Print array elements & addresses in a table

        for (int i = 0; i < 5; i++)
        {
            // Print the memory address of the array element using the pointer
            printf("|%30p |", &myArrPtr[i]);
            // Print the memory address of the array element using the array name
            printf("%30p |", &myArr[i]);
            // Print content of array using the pointer
            printf("%30d |\n", myArrPtr[i]);
        }

}