#include<stdio.h>
int main(){
    int  n=8;
    do{
            if(n%2!=0 && n!=11 && n!=17 && n!=21){
                printf("%d ",n);
            }
        n++;
    }while(n<=1000);
}