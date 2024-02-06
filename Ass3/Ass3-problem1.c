#include<stdio.h>
#include<math.h>
int main(){
    int number;
    printf("Enter number ");
    scanf("%d",&number);

    float Tf,Tc;
    if (number==1){
        float tf;
         printf("Enter Tf :");
    scanf("%f",&Tf);
     tf=((float)9/6*Tc)+32;
     printf("Temperature from celsius to farenheit is %f\n",tf);
    }
    if (number==2){
        float tc;
        printf("Enter Tc");
    scanf("%f",&Tc);
     tc=((float)5/9)*(Tf-32);
        printf("Temperature from celsius to farenheit  is %f",tc);
    }
    return 0;
}