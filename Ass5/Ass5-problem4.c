#include<stdio.h>
int main(){
    int k;
    for(k=1;k<=100;k++){
        if(k % 3==0 ){
            printf("%d ",k);
        }
        if(k==30 ||k==60 ||k==90){
            continue;
        }
    }
    return 0;
}