#include<stdio.h>
#include<math.h>
int main(){
    
    float a,b,c,deta,x1,x2,x12;
    printf("Enter a :");
    scanf("%f",&a);
    printf("Enter b :");
    scanf("%f",&b);
    printf("Enter c :");
    scanf("%f",&c);
    //equa = a*pow(x,2) + b*x + c;
    deta =(float)pow(b,2)-4*a*c;
    print("The value of deta in this equation is %2.f",deta);      
    if(deta>0){
       x1= (float)(-b+sqrt(deta))/2*a;
       x2= (float)(-b-sqrt(deta))/2*a;
      printf("X1=%.2f\n",x1);    
      printf("x2=%.2f",x2);
    }
    else if(deta=0){
         x12=(float)(-b/2*a);   
        printf("The equation has a root x12=%.2f",x12);
    }
    else if (deta<0){ 
        printf("The equation has no root");
    }
    return 0;
}