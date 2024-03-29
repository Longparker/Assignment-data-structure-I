#include<stdio.h>
struct student{
    int studentID;
    char citizen[10];
    char name[20];
    int score;
    char gender[20];
};
void displayarray(struct student hi[]){
    printf("Name\t\tID\t\tGender\t\tCitizen\t\tScore\n");
    for(int i=0;i<=3;i++){
        printf("%s\t\t%d\t\t%s\t\t%s\t\t%d\n",hi[i].name,hi[i].studentID,hi[i].gender,hi[i].citizen,hi[i].score);
    }
};
int main(){
    struct student s1;
    struct student hi[4];
    for(int i=0;i<=3;i++){
    printf("Student#%d\n",i+1);
    printf("Enter student name:");scanf("%s",&hi[i].name);
    printf("Enter student ID:");scanf("%d",&hi[i].studentID);
    printf("Enter student Gender:");scanf("%s",&hi[i].gender);
    printf("Enter student citizen:");scanf("%s",&hi[i].citizen);
    printf("Enter score:");scanf("%d",&hi[i].score);
    }
    displayarray(hi);
}