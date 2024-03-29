#include<stdio.h>
enum operation{
    Addiction=1,Subtraction,Multiplication,Division
};
int main(){
    enum operation hi;
    float num1,num2;
    while(1){
    printf("Enter number1:");scanf("%f",&num1);
    printf("Enter number2:");scanf("%f",&num2);
    printf("Enter Valid operation:");scanf("%d",&hi);
    switch(hi){
        case Addiction:
        printf("Addiction=%f\n",num1+num2);
        break;
        case Subtraction:
        printf("Subtraction=%f\n",num1-num2);
        break;
        case Multiplication:
        printf("Multiplication=%f\n",num1*num2);
        break;
        case Division:
        printf("Division=%f\n",num1/num2);
        break;
        default:
        printf("Invalid operation\n");
        break;
    }
    }
}