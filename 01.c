/*1. Write a C program that reads the principal, rate of interest and number of years and find
the simple interest and amount.*/
include <stdio.h>
int main(){
    float p, t, r, si = 0.0;
    printf("Enter principal , rate and time : ");
    scanf("%f %f %f", &p,&t,&r);
    si = (p*t*r)/100.0;
    printf("Simple Interest = %f", si);
}
