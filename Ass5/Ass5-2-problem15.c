#include<stdio.h>
int main(){
    int num;
    int n1=0,n2=1;
    int nextnum=0;
    printf("Input a number: ");scanf("%d",&num);
    printf("The first %d number of suit fibonacci is: ",num);
    for (int i=0;i<num ;i++){
        printf("%d ",nextnum);
        n1=n2;
        n2=nextnum;
        nextnum=n1+n2;
    }
}