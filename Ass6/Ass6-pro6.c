#include<stdio.h>
int main(){
    unsigned long long mul = 1;
    int n=0;
    while(n<100){
        n++;
        printf("%d ",n);
        mul= mul*n;
    }
    printf("%lld ",mul);
}