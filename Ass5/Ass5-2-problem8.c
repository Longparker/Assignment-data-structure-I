#include<stdio.h>
int main(){      
    int num[20];
    int max;
    for(int p=0;p<20;p++){
        printf("Enter a number for n%d:",p+1);scanf("%d",&num[p]);
    }
    max=num[0];
    for(int n=0;n<20;n++){
        if(num[n]>max){
            max=num[n];
        }
    }
    printf("\nThe maximum number is %d.",max);
}