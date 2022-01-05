//7. Write a C program to display the sum of 'n' terms of 'even' numbers. 
#include <stdio.h>
int main(){
    int i, num, even = 2, esum = 0;
    printf("How many numbers?");
    scanf("%d", &num);
    for (i = 0; i<num; i++){
        esum = esum + even;
        even = even + 2;
    }
    printf("The number %d terms of even numbers = %d", num, esum);
}