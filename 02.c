/* 2. Write a C program to read the radius of a circle 
and display its area. */
#include <stdio.h>
#define PI 3.14
int main(){
    float r, area = 0;
    printf("Enter radius: ");
    scanf("%f", &r);
    area = PI*r*r;
    printf("Area of Circle = %f", area);
}