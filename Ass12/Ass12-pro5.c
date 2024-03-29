#include<stdio.h>
enum Trafficlight{
    Red=1,Yellow,Green
};
int main(){
    enum Trafficlight hi;
    while(1){
    printf("Enter Valid value: ");scanf("%d",&hi);
    switch(hi){
        case Red:
        printf("Stop!\n");
        break;
        case Yellow:
        printf("Prepare to stop!\n");
        break;
        case Green:
        printf("Goo!!\n");
        break;
        default:
        printf("Invalid\n");
        break;
    }
    }
}