#include<stdio.h>
enum ResponseStatus{
    Ok=200,Notfound=404,Internal=500,Bad=502
};
int main(){
    while(1){
    enum ResponseStatus hi;
    printf("Enter code: ");scanf("%d",&hi);
    switch(hi){
        case Ok:
        printf("Ok\n");
        break;
        case Notfound:
        printf("Notfound\n");
        break;
        case Internal:
        printf("InternalServerError\n");
        break;
        case Bad:
        printf("Bad Gateway\n");
        break;
        default:
        printf("Invalid\n");
        break;
    }
    }
}