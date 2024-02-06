#include<stdio.h>
int main(){
    int n=2;
    int prime;
    printf("Prime number between 2 to 500 are:  ");
    do{
        prime=0;
        int i=2;
            do{
                if(n%i==0){
                    prime=1;
                    break;
                }
                i++;
            }while(i<=n/2);
            if(prime==0){
                printf("%d ",n);
            }
            n++;
    }while(n<=500);
}