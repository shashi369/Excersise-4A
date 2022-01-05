/*3. Write a C program to input an arbitrary number and
find out whether it is positive or negative. */
#include<stdio.h>
int main(){
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n>0){
        printf("Postive Number");
    }else if(n<0){
        printf("Negative Number");
    }else{
        printf("It is Zero");
    }
   
}