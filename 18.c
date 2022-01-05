/*18. Write a C program to input the name of 20 students and arrange them
in alphabetical order.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
    char name[20][100],temp[10];
    int i,j;
    for(i=0;i<20;i++){
        printf("input the name of student:");
        scanf("%s",name[i]);
    }
    
    for(i=0;i<20;i++){
        for(j=i+1;j<20;j++){
            if(strcmp(name[i],name[j])>0){
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }
    printf("\n Name in alphabetical order\n");
    for(i=0;i<20;i++){
        printf("%s\n",name[i]);
    }
}