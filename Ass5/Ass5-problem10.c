#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter number :");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        sum=sum+i;
        
    }
    printf("The total sum suite numeber from 1 to %d is %d ",n,sum);
    return 0;
}