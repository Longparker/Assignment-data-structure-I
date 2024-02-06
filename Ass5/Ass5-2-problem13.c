#include<stdio.h>
int main(){
    int n,total=0,p;
    int w=1;
    while(w=1){
        printf("Input a number ");scanf("%d",&n);
    for(int i=1;i<n;i++){
        p =n%i;
    if(p==0){
        total=total+i;
        }
    }
    if(total==n){
        printf("%d is perfect number.\n\n",n);
    }else{
        printf("%d is not a perfect number.\n\n",n);
    }

}
}