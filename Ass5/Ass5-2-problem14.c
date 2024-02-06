#include<stdio.h>
int main(){      
    int num[20];
    int min;
    for(int p=0;p<10;p++){
        printf("Enter a number for n%d:",p+1);scanf("%d",&num[p]);
    }
    min=num[0];
    for(int n=0;n<10;n++){
        if(num[n]<min){
            min=num[n];
        }
    }
    printf("\nThe minimum number is %d.",min);
}