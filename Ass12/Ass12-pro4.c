#include<stdio.h>
enum filemode{
    Read=1,Write,Append
};
int main(){
    enum filemode hi;
    while(1){
    printf("Enter Valid value: ");scanf("%d",&hi);
    switch(hi){
        case Read:
        printf("Read\n");
        break;
        case Write:
        printf("Write\n");
        break;
        case Append:
        printf("Append\n");
        break;
        default:
        printf("Invalid\n");
        break;
    }
    }
}