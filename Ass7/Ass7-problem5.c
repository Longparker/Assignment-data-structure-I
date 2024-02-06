#include<stdio.h>
int main(){
    int n=1;
    int sum=0;
    do{
        printf("%d ",n);
        n++;
        sum=sum+n;
    }while(n<=100);
    printf("\nThe summation of number from 1 to 100 is %d.",sum);
}