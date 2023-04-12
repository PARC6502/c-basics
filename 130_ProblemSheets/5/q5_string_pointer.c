// Write a program that allows the user to enter a string into a string variable. Create a pointer to 
// point to this string. Then print this string:
// a) Using the pointer with %c within a for loop
// b) Using the string and a pointer with %s

#include <stdio.h>

void main() {
  char string[128];
  char *strPtr;

  printf("Enter a string: ");
  fgets(string, sizeof(string), stdin);
  strPtr = string;
  printf("Printing with %%c and pointer:\n");
  for (int i=0; string[i] != '\0' && string[i] != '\n'; i++) {
    printf("%c", *(strPtr + i));
  }
  printf("\n");

  printf("Printing with %%s and pointer:\n");
  printf("%s", strPtr);
}