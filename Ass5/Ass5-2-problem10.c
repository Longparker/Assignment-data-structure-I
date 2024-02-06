#include<stdio.h>
int main(){
    int n,prime;
    printf("Input number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        prime=n%i;
        if(prime!=0){
            printf("%d is not primary number",n);
            break;
        }else if(prime==0){
            printf("%d is primary number",n);
            break;
        }
    }
}