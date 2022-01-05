/*11.Write a C program to read the age of 40 students and count the number 
of students aged between 15 and 22. */
#include <stdio.h>
int main(){
    int age[40], countAge = 0, i;
    printf("Enter the age of 40 students: ");
    for (i = 0; i<40; i++){
        scanf("%d", &age[i]);
        if (age[i]>=15 && age[i]<22){
            countAge++;
        }
    }
    printf("The number of students between age 15 and 22 = %d", countAge);
}