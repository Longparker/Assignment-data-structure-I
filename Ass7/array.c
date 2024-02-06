#include<stdio.h>
int main(){
    char names[5];
    int ID[100];
    int score[100];
    for(int k=0;k<5;k++){
        printf("Enter student name %d :",k+1);
        scanf("%s",&names[k]);
        
        printf("\nEnter student ID:");
        scanf("%d",&ID[k]);

        printf("\nEnter score :");
        scanf("%d",&score[k]);
        printf("\n------------------\n");
    }
}