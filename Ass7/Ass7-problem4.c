#include<stdio.h>
int main(){
    int n=1;
    do{
        if(n%3==0 && n!=30 && n!=60 && n!=90){
            printf("%d ",n);
        }
        n++;
    }while(n<=100);
}