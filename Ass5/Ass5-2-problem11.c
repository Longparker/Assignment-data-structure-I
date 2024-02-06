#include<stdio.h>
int main(){
   int i,n,c;
   for(n=1;n<=500;n++){
    c=0;
    for( i=2;i<=n/2;i++){
        if(n%i==0){
            c++;
            break;
        }
    }
    if(c==0 &&n!=1){
        printf("%d ",n);
    }
   }
}