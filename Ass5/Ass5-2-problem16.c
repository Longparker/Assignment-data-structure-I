#include<stdio.h>
int main(){
    int n;
    int sum=0;
    while(n!=-1 ||n!=0){
        printf("Input number : ");scanf("%d",&n);
        sum=sum+n;
        if(n==0 ||n==-1){
            break;
        }
    }
    printf("\n The total of the number is %d",sum);
}