#include<stdio.h>
int main(){
     int n;
    int prime;
    do{
        printf("Input a number:");
        scanf("%d",&n);
        prime=0;
        int i=2;
            do{
                if(n%i!=0){
                    prime=1;
                    break;
                }
                i++;
            }while(i<=n/2);
       if (prime) {
           printf("%d is a prime number.\n", n);
       } else {
           printf("%d is not a prime number.\n", n);
       }
    }while(n!=0);
}