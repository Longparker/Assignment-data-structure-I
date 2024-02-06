#include<stdio.h>
int main(){
     int n,sum=0;
    printf("Input a Nnumber:");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        sum+=pow(i,3);
        if(i!=n){
            printf("+"); 
        }
        printf("%d^%d ",i,i);
    }
    printf(" =%d",sum);
}