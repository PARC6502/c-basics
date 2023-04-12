// Write a program to calculate the solution for the quadratic equation y(x)=Ax^2 + Bx + C
// A, B and C are entered by the user and x varies from 0 to 49.
// A > -1.0; -10.0 < B < 10.0; C < 0.1

#include <stdio.h>

void main()
{
  float A, B, C, *yPtr;

  do
  {
    printf("Enter a value for A greater than -1.0: ");
    scanf("%f", &A);
  } while (A <= -1.0);

  do
  {
    printf("Enter a value for B between -10.0 and 10.0: ");
    scanf("%f", &B);
  } while (B <= -10.0 || B >= 10.0);

  do
  {
    printf("Enter a value for C less than 0.1: ");
    scanf("%f", &C);
  } while (C >= 0.1);

  printf("Here are the solutions for the quadratic equation y(x) = Ax^2 + Bx + C for x between 0 and 49\n");
  printf("%5s | %5s | %10s\n", "x", "y(x)", "Address");
  for (int x = 0; x < 50; x++)
  {
    *(yPtr+x) = (A * x * x) + (B * x) + C;
    printf("%5d | %5.1f | %10p\n", x, *(yPtr+x),(yPtr+x) );
  }
}