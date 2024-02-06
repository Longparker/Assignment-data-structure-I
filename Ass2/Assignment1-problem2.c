#include<stdio.h>
int main(){
    int number;
    int a= 7;
    int b= 2;
    int sum = a+b;
    printf("%d+%d=%d\n",a,b,sum);
    int minus = a-b;
    printf("%d-%d=%d\n",a,b,minus);
    int mul = a*b;
    printf("%d*%d=%d\n",a,b,mul);
    float div = (float) a/b;
    printf("%d/%d=%f\n",a,b,div);
    int mod = a%b;
    printf("%d mod%d=%d",a,b,mod);
    return 0;
}