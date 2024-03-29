#include<stdio.h>
enum errorcode{
    Found=302,Bad=400,Unau=401,Forb=403,Notfound=404,Request=408,Too=429
};
int main(){
    while(1){
    enum errorcode hi;
    printf("Enter code: ");scanf("%d",&hi);
    switch(hi){
        case Found:
        printf("Found(Redirect)\n");
        break;
        case Bad:
        printf("Bad Request\n");
        break;
        case Unau:
        printf("Unautorized\n");
        break;
        case Forb:
        printf("Forbiden\n");
        break;
        case Notfound:
        printf("Not found\n");
        break;
        case Request:
        printf("Request\n");
        break;
        case Too:
        printf("Too many request\n");
        break;
        default:
        printf("Invalid\n");
        break;
    }
    }
}