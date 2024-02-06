#include<stdio.h>
int main(){
    int n;
    int min=0;
    int count=0;
    do{
        printf("Input number: ");
        scanf("%d",&n);
        if(count==0 ||n<min){
            min=n;
        }
        count++;
    }while(count<=20);
    printf("\n The minimum number is %d ",min);
}