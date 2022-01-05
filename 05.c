/*5. Write a program to display the name of the day in a
week, depending on the number entered through the keyboard 
using the switch-case statement.*/
#include <stdio.h>
int main(){
    int num;
    printf("Enten an intger: ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("It's Sunday");
    break;
    case 2:
        printf("It's Monday");
    break;
    case 3:
        printf("It's Tueday");
    break;
    case 4:
        printf("It's Wednesday");
    break;
    case 5:
        printf("It's Thursday");
    break;
    case 6:
        printf("It's Friday");
    break;
    case 7:
        printf("It's Saturday");
    break;
    default:
        printf("Invalid Input\n");
        printf("Enter a number in between 1 - 7");
    }
}