#include<stdio.h>
int main(){
    int k=100;
    for(k=1;k<=100;k++){
        if(k==50){
            continue;
        }
         printf("%d ",k);
    }
    return 0;
}