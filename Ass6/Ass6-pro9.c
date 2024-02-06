#include<stdio.h>
#include<time.h>
int main(){
    int i,random,start=1,end=20;
    int count;
    int input;
    random= rand()%end + start;
    printf("%d\n ", random);
    while(1){
        printf("Enter a number between 1-10: ");
        scanf("%d", &input);
        count++;
    if(input==random){
        printf("***Congratulation! Your guess number is correct!\nYou have try %d times to get it right!", count);
        break;
    }
    if(input < random){
    printf("Not correct! Try to guess a bigger number!\n");

    }else if(input>random){
      printf("Not correct! Try to guess a smaller number!\n");
    }
    }
}








