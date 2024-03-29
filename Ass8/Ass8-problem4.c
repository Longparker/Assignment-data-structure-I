#include<stdio.h>
int main(){
    int i,j,sum=0,number[10],dup_check=0,non_dup=0,dup=0,c=0;
    for(i=0;i<10;i++){
        printf("Enter number #%d:",i+1);
        scanf("%d",&number[i]);
         sum=sum+number[i];
    }
    printf("\n The summation of all input number is %d.",sum);
    for(i=0;i<10;i++){
        dup_check=0;
        for(j=0;j<10;j++){
        if(j!=i && number[j]==number[i]){
            dup_check=1;
            break;
        }
        }
        if(dup_check>=1){
            c++;
            dup++;
        }else{
            non_dup++;
        }
    }
    printf("There are %d deplicate element.And there are %d non deplicate element in this array.",dup,non_dup);

}