#include<stdio.h>
int main(){
    int n=8;
    while(n<1000){
        n++;
     if(n % 2!=0){
        if(n==11 || n==17 || n==21){
            continue;
        }
     printf("%d ",n);
     }
        
    }
    
}