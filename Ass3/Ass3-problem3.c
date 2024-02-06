#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,e,f,g,h;
    printf("Enter number :");scanf("%d",&a);
    printf("Enter number :");scanf("%d",&b);
    printf("Enter number :");scanf("%d",&c);
    printf("Enter number :"); scanf("%d",&d);
    printf("Enter number :");scanf("%d",&e);
    printf("Enter number :");scanf("%d",&f);
    printf("Enter number :");scanf("%d",&g);
    printf("Enter number :");scanf("%d",&h);
   int max = a;
     max=a;
    if(b> max){
        max=b;
   }
     if(c> max){
        max=c;
   }
    if(d> max){
        max=d;
   }
     if(e> max){
        max=e;
   }
     if(f> max){
        max=f;
   }
     if(g> max){
        max=g;
   }
     if(h> max){
        max=h;
   }
   printf("The maximum number is:%d" , max);
    return 0;
}