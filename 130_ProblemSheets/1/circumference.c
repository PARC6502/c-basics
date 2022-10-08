#include <stdio.h>
#include <math.h>

int main() {
    float radius, circumference;
    puts("Welcome to circumference, a program for calculating the circumference.");
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    circumference = 2*M_PI*radius;
    printf("The circumference is: %.2f", circumference);
    return 0;
}