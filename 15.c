/*15. Write a C program to input a matrix of size 3 x 2 and another of size 2 x 3 and perform the matrix
multiplication.*/
#include<studio.h>
#include<conio.h>

void main(){
    int i,j,k,sum=0, product[2][2], first[2][3], second [3][2];
    printf("Enter first Matrix: ");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++)
            scanf(“%d”,& first [i][j]);
    }
    printf("Enter second Matrix: ");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++)
            scanf(“%d”,& second[i][j]);
    }
//Matrix multiplication
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<3;k++){
                sum=sum+ first[i][k] * second[k][j];
            }
            product [i][j]=sum;
            sum=0;
        }
    }

}