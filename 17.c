/*17. Write a C program to check if a string is a palindrome or not. 
Note: Palindrome is a string that reads the same from left to right and vice-versa. For e.g., LIRIL*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    char reverse[100];
    int i;
    printf("Enter a string: ");
    gets(str);
    int x = strlen(str) - 1;
    // reverse the string
    for (i = 0; str[i]!='\0'; i++){
        reverse[i] = str[x];
        x--;
    }
    //comparing the two strings
    if (strcmpi(reverse, str) == 0){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
}