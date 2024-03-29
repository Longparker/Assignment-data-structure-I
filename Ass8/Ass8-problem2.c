#include<stdio.h>
int main(){
    int score[20],i,sum=0,greater,count=0;
    float average;
    for(i=0;i<20;i++){
        printf("Enter users #%d score: ",i+1);
        scanf("%d",&score[i]);
        sum=sum+score[i];
    }
     average=sum/20;
    printf("----------------");
    printf("\nAverage is: %.2f.Score that are greater than average are: ",average);
    for(i=0;i<20;i++){
        if(score[i]>average){
            printf("%d ",score[i]);
            score[i]=greater;
            count++;
        }
    }
    printf("\nThere are %d number that's higher than the average.",count);
    
}