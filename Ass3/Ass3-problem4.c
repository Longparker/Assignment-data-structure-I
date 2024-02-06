#include<stdio.h>
int main(){
     int a,b,c,d,e,f,g,h;
    printf("Enter number :");scanf("%d",&a);
    printf("Enter number :");scanf("%d",&b);
    printf("Enter number :");scanf("%d",&c);
    printf("Enter number :");scanf("%d",&d);
    printf("Enter number :");scanf("%d",&e);
    printf("Enter number :");scanf("%d",&f);
    printf("Enter number :");scanf("%d",&g);
   int mini = a;
     mini=a;
    if(b< mini){
        mini=b;
   }
     if(c< mini){
        mini=c;
   }
    if(d< mini){
        mini=d;
   }
     if(e< mini){
        mini=e;
   }
     if(f< mini){
        mini=f;
   }
     if(g< mini){
        mini=g;
   }
   printf("The maximum number is:%d" ,mini);
    return 0;
}