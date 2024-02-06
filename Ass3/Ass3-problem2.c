#include<stdio.h>
#include<math.h>
int main(){
    //find the area of triangle
    int number;
    printf("Enter number :");
    scanf("%d",&number);
    if(number==1){
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
    if(number==2){
        float r;
        printf("Enter r :");
        scanf("%f",&r);
        float Areacircle=3.14*(pow(r,2));
        printf("The area of circle %f",Areacircle);
    }
    if (number==3){
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