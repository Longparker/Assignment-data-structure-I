#include<stdio.h>
#include<math.h>
int main(){
    int number;
      float Tf,Tc;
    printf("Enter number ");
    scanf("%d",&number);
    if(number==1){
         char con;
        printf("Enter conversion :");   
        scanf("%s",&con);
        if(con=='a' ){
        float tf;
         printf("Enter Tf :");
         scanf("%f",&Tf);
         tf=((float)9/6*Tc)+32;
         printf("Temperature from celsius to farenheit is %f\n",tf);
        }else if(con=='b'){
          float tc;
            printf("Enter Tc :");
            scanf("%f",&Tc);
            tc=((float)5/9)*(Tf-32);
        printf("Temperature from farenheit to celsius  is %f",tc);
    }}
    if(number==2){
        int a,b,c;
    printf("Enter a :");
    scanf("%d",&a);
    printf("Enter b :");
    scanf("%d",&b);
    printf("Enter c :");
    scanf("%d",&c);
    float S = (a+b+c)/2;
    float A=sqrt(S*(S-a)*(S-b)*(S-c));
    printf("The area of triangle is %f",A);
    }
    if(number==3){
       float r;
    printf("Enter r :");
    scanf("%f",&r);
    float Areacircle=3.14*(pow(r,2));
    printf("The area of circle %f",Areacircle);
    }
    if(number==4){
     int  width,height; 
        printf("Enter width:\n");
        scanf("%d" , &width);
        printf("Enter height:\n");
        scanf("%d" , &height);
       int surfaceretangle = width * height;
        printf("The surfacetrangle is:%d\n" , surfaceretangle);
    }
    return 0;
}