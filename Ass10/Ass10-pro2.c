#include<stdio.h>
void vote(int age){
    if(age>=18){
        printf("You are allowed to vote.");
    }else if(age<18){
        printf("You are not allowed to vote.");
    }else{
        printf("Invalid");
    }
}
int main(){
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    vote(age);
}