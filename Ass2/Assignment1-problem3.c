#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter name ");
    scanf("%s",&name);
   
    int year;
    printf("Enter birth year:");
    scanf("%d",&year);
    int present;
    printf("Enter your present :");
    scanf("%d",&present);
    int age = present - year;
     printf("Hello!My name is %s\n", name);
    printf("I was born in %d\n", year);
    printf("I am %d years old", age);
    return 0;
}




