#include<stdio.h>
int main(){
    char name[20];
     printf("Enter name ");
    scanf("%s",&name);
    int year;
    printf("Enter year :");
    scanf("%d",&year);
    char province[20];
    printf("Enter province ");
    scanf("%s",&province);
    char dep[50];
    printf("Enter department ");
    scanf("%s",&dep);
    printf("Hello everyone!");
     printf("My name is %s\n", name);
     printf("I am from %s province\n",province);
     printf("i am in year %d\n",year);
     printf("i am from department %s\n",dep);
     printf("welcome to C programming.");
 
    return 0;
}