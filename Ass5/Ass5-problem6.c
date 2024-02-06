#include<stdio.h>
int main(){
    int mul=1,i;
    for(i=1;i<=100;i++){
        printf("%d ",i);
        mul=mul*i;
    }
     printf("\n Total multiply number from 1 to 100 is %d",mul);
    
}