#include<stdio.h>
int main(){
    int n=1;
    while(n<100){
        n++;
        if(n%3==0){
            if(n==30 || n==60 || n==90){
                continue;
            }
             printf("%d ",n); 
        }
    }
}