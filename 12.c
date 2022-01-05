/*12. Write a C program to input several numbers 
and arrange them in ascending order. */
#include<stdio.h>
main(){
    int a[10],i,j,temp;
    printf("Enter the 10 Numbers: \n");
    for(i=0;i<10;i++){
        printf("Enter a value:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            if(a[j]>a[j+1]) {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nGiven numbers in ascending order: \n");
    for(i=0;i<10;i++){
        printf("%d",a[i]);
    }
}