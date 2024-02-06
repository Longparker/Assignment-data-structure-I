#include<stdio.h>
#include<time.h>
int main(){
     int num1,num2,num3;
    printf("Welcome to guessing number game!!\n");
    printf("you have three time to guess the number.\n");
    printf("The rendomized number has been generated successfully\n");
    
    srand(time(0));
    int n;
    int min=1,max=1000;
    n=rand()%max+min;
    printf("%d",n);
    printf("Enter a number :");scanf("%d",&num1);
    if(num1>n){
        printf("your prdicted number is too big.you can try predicting the smaller one.\n");
        printf("Enter a number :");scanf("%d",&num2);
    }
    else if(num1<n){
        printf("your prdicted number is too small.you can try predicting the greater one.\n");
        printf("Enter a number :");scanf("%d",&num2);
    }
      else if(num1=n){
        printf("Congratulation!! you guessed only one time and correct.\n");   
    }
    if(num2>n){
        printf("your prdicted number is too big.you can try predicting the smaller one.\n");
        printf("Enter a number :");scanf("%d",&num3);
    }
    else if(num2<n){
        printf("your prdicted number is too small.you can try predicting the greater one.\n");
        printf("Enter a number :");scanf("%d",&num3);
    }
      else if(num2=n){
        printf("Congratulation!! you guessed the number for seconds time and correct.\n");
    }
    if(num3>n){
        printf("your prdicted number is too big.you can try predicting the smaller one.\n");
        printf("Enter a number :");scanf("%d",&n);
    }
    else if(num3<n){
        printf("your prdicted number is too small.you can try predicting the greater one.\n");
        printf("Enter a number :");scanf("%d",&n);
    }
      else if(num3=n){
        printf("Congratulation!! you guessed the correct number.\n");   
    }
    return 0;
}
