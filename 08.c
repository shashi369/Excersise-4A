/*8.Write a program to check whether the given number is a palindrome or not. */
#include <stdio.h>
int main(){
    int num, n, remainder, ulta;
    printf("Enter an intger: ");
    scanf("%d", &num);
    n = num;
    while (num != 0){
        remainder = num % 10;
        ulta = ulta * 10 + remainder;
        num = num/10;
    }
    if (n == ulta){
        printf("It is palindrome");
    }else{
        printf("It is not palindrome");
    }
}