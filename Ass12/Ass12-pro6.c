#include<stdio.h>
enum trafficlight{
    Red=60,Yellow=5,Green=45
};
int main(){
    enum trafficlight hi;
    while(1){
    printf("Enter a valid number:");
    scanf("%d",&hi);
    switch(hi){
        case Red:
        printf("\033[1;31m Red\033[0m\n");
        break;
        case Yellow:
        printf("\033[1;33m Yellow\033[0m\n");
        break;
        case Green:
        printf("\033[1;32m Green\033[0m\n");
        break;
        default:
        printf("Invalid\n");
        break;
    }
    }
}

