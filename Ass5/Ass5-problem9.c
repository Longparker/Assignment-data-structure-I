#include<stdio.h>
int main(){
    int i,n,fac = 1;
    printf("Enter number :");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        fac = fac*i;
    }
    printf("The factorial of %d is %d ",n,fac);
    return 0;
}