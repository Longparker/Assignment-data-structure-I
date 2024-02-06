#include<stdio.h>
int main(){
    int n=0;
    int sum=0;
    while(n<100){
        n++;
        printf("%d ",n);
        sum=sum+n;
    }
    printf("\nThe sumation of all number from 1 to 100 is %d ",sum);
}