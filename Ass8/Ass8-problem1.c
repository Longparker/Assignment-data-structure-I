#include<stdio.h>
int main(){
    //a.Declare and store an array with 5 English’s vowels
    int k;
    char vowels[5]={'a','e','i','o','u'};
    for(k=0;k<5;k++){
        vowels[k];
    }
    //b. Declare and store an array with English’s alphabet A-Z
    int i;
    char alphabet[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','y','z'};
    for(i=0;i<26;i++){
        alphabet[i];
    }
    //c. Declare and store an array with even integer numbers 2, 4, … 100
    int s;
    int number[100];
    int sum=0;
    for(s=1;s<=100;s++){
        number[s];
        sum=sum+2;
        number[s]=sum;
    }
    //d.Declare and store an array of 10 user names. Ask the user to input all those 10 names. Then display their names on the screen
    int n;
    char users[10];
    for(n=0;n<10;n++){
        printf("Enter users name #%d :",n+1);
        scanf("%s",&users[n]);
    }

}