/*4. Write a C program that reads three numbers and 
displays the largest among them. */
#include <stdio.h>
int main(){
    int first, second, third;
    printf("Enter the first integer number: ");
    scanf("%d", &first);
    printf("Enter the second integer number: ");
    scanf("%d", &second);
    printf("Enter the third integer number: ");
    scanf("%d", &third);
    if(first > second && first>third){
        printf("The greatest number is = %d", first);
    }else if(second > first && second>third){
        printf("The greatest number is = %d", second);
    }else{
        printf("The greatest number is = %d", third);
    }
}