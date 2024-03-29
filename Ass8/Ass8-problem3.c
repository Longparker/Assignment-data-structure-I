#include<stdio.h>
int main(){
    int i,sum=0,number[10];
    for(i=0;i<10;i++){
        printf("Enter number #%d:",i+1);
        scanf("%d",&number[i]);
         sum=sum+number[i];
    }
    printf("\n The summation of all input number is %d.",sum);
}