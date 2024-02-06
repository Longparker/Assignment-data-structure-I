#include<stdio.h>
#include<math.h>
int main(){
    int k=1000;
    for(k=8; k<=1000; k=k+1){
        if(k % 2==0){
            continue;
        }
        if(k==11 ||k==17||k==21){
               continue;
        }
         printf("%d ",k);
        }
    return 0;
}