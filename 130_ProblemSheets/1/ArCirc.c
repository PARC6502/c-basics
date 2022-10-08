#include <stdio.h>
#include <math.h>

int main() {
    float radius, circumference, area;
    puts("Welcome to ArCirc!");
    puts("A program for calculating the area and circumference of a circle.");
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    circumference = 2*M_PI*radius;
    area = M_PI*powf(radius,2);
    printf("The circumference is: %.2f\n", circumference);
    printf("The area is: %.2f", area);
    return 0;
}