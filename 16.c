/*16. Write a C program to count the numbers of vowels and consonants in a given text. */
#include <stdio.h>
#include <ctype.h>
int main(){
    char str[100];
    int i, vowelCount = 0;
    char x;
    printf("Enter text: ");
    gets(str);
    while(str[i] != '\0'){
        x = toupper(str[i]);
        if ((x == 'A')|| (x == 'E' )|| (x == 'I') || (x == 'O') || (x == 'U')){
            vowelCount++;
        }
        i++;
    }
    printf("The number of vowels = %d", vowelCount);
}