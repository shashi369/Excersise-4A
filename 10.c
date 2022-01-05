/*10. Write a C program to input 10 numbers and display the largest and the smallest among them. */
#include <stdio.h>
int main(){
    int i, greatest, smallest;
    int num[10];
    printf("Enter 10 numbers: \n");
    for (i = 0; i<10; i++){
        scanf("%d", &num[i]);
    }
    greatest = num[0];
    smallest = num[0];
    for (i = 1; i<10;i++){
        if (num[i] > greatest){
            greatest = num[i];
        }
        if (num[i] < smallest){
            smallest = num[i];
        }
    }
    printf("The greatest number = %d\n", greatest);
    printf("The smallest number = %d", smallest);
}