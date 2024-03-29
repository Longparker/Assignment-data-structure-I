#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef struct{
    float y;
}root;
root formula(int x){
   root s;
   s.y=(float)(3*(pow(x,2))-2*x);
   printf("Y= %f\n",s.y);
   return s;
}
int main(){
    float x;
    while(1){
    printf("Enter X:");
    scanf("%f",&x);
   // printf("%d",x);
    root hi = formula(x);
}
}