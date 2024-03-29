#include<stdio.h>
struct employee{
    int ID;
    char position[10];
    char name[20];
    int salary;
    char gender[20];
};
void displayarray(struct employee hi[] ,int size){
    printf("Name\t\tID\t\tGender\t\tCitizen\t\tScore\n");
    for(int i=0;i<=size;i++){
        printf("%s\t\t%d\t\t%s\t\t%s\t\t%d\n",hi[i].name,hi[i].ID,hi[i].gender,hi[i].position,hi[i].salary);
    }
};
int higestsalary(struct employee hello[],int size){
    int max=hello[0].salary;
    for(int i=0;i<=size;i++){
        if(hello[i].salary>max){
            max=hello[i].salary;
            max=i;
            printf("Employee who has higest salary is \n");
            printf("%s\t\t%d\t\t%s\t\t%s\t\t%d\n",hello[i].name,hello[i].ID,hello[i].gender,hello[i].position,hello[i].salary);
            break;
        }
    }
    return max;
}
void lowestsalary(struct employee hello[],int size){
    int min=hello[0].salary;

    for(int i=0;i<=size;i++){
        if(min>hello[i].salary){
            min=hello[i].salary;
        }
        printf("Employee who has lowest salary is \n");
        printf("%s\t\t%d\t\t%s\t\t%s\t\t%d\n",hello[i].name,hello[i].ID,hello[i].gender,hello[i].position,hello[i].salary);
    }
};
int main(){
    int n;
    struct employee hi[4];
    printf("Enter number of Employee:");scanf("%d",&n);
    for(int i=0;i<=n;i++){
    printf("Employee#%d\n",i+1);
    printf("Enter name:");scanf("%s",&hi[i].name);
    printf("Enter ID:");scanf("%d",&hi[i].ID);
    printf("Enter Gender:");scanf("%s",&hi[i].gender);
    printf("Enter Position:");scanf("%s",&hi[i].position);
    printf("Enter Salary:");scanf("%d",&hi[i].salary);
    }
    displayarray(hi,n);
    higestsalary(hi,n);
    lowestsalary(hi,n);
}