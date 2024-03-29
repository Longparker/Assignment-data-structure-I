#include<stdio.h>
struct student{
    int studentID;
    char citizen[10];
    char name[20];
    int score;
    char gender[20];
};
void displayarray(struct student hi[] ,int size){
    printf("Name\t\tID\t\tGender\t\tCitizen\t\tScore\n");
    for(int i=0;i<=size;i++){
        printf("%s\t\t%d\t\t%s\t\t%s\t\t%d\n",hi[i].name,hi[i].studentID,hi[i].gender,hi[i].citizen,hi[i].score);
    }
};
int higestscore(struct student hello[],int size){
    int max=hello[0].score;
    for(int i=0;i<=size;i++){
        if(max<hello[i].score){
            max=hello[i].score;
            max=i;
             printf("Student who has higest score is \n");
            printf("%s\t\t%d\t\t%s\t\t%s\t\t%d\n",hello[i].name,hello[i].studentID,hello[i].gender,hello[i].citizen,hello[i].score);
            break;
        }
    }
    return max;
};
int main(){
    int n;
    struct student hi[4];
    printf("Enter size of student:");scanf("%d",&n);
    for(int i=0;i<=n;i++){
    printf("Student#%d\n",i+1);
    printf("Enter student name:");scanf("%s",&hi[i].name);
    printf("Enter student ID:");scanf("%d",&hi[i].studentID);
    printf("Enter student Gender:");scanf("%s",&hi[i].gender);
    printf("Enter student citizen:");scanf("%s",&hi[i].citizen);
    printf("Enter score:");scanf("%d",&hi[i].score);
    }
    displayarray(hi,n);
    higestscore(hi,n);
}