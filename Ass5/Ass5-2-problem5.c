#include<stdio.h>
#include<math.h>
int main(){
    int n,sum=0;
    printf("Input a Nnumber:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=pow(i,3);
        if(i!=n){
            printf("+");
        }
        printf("%d^%d ",i,i);
    }
    printf(" =%d",sum);
}