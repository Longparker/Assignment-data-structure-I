#include<stdio.h>
struct product{
    int id;
    char name[20];
    char pcd[10];
    char exp[10];
    char color[20];
};
struct Seller{   
    char name[20];
    int seller_id;
    int house_number;
    int road;
    char city[20];
};
void displayarray(struct product hi[],int size){
     printf("Name\t\tID\t\tPCD\t\t\tEXP\t\t\tColor\n");
    for(int i=0;i<=size;i++){
        printf("%s\t\t%d\t\t%s\t\t%s\t\t%s\n",hi[i].name,hi[i].id,hi[i].pcd,hi[i].exp,hi[i].color);
    }
}
void displayseller(struct Seller hello){
    printf("...................\n");
    printf("**About seller**\n");
    printf("Name\t\tID\t\tHouse NUmber\t\tRoad\t\tCity\n");
    printf("%s\t\t%d\t\t%d\t\t\t%d\t\t\t%s\n",hello.name,hello.seller_id,hello.house_number,hello.road,hello.city);
};
int main(){
    int n;
    struct product hi[4];
    struct Seller hello;
    printf("Enter amount of product:");scanf("%d",&n);
    for(int i=0;i<=n;i++){
    printf("Product#%d\n",i+1);
    printf("Enter name:");scanf("%s",&hi[i].name);
    printf("Enter ID:");scanf("%d",&hi[i].id);
    printf("Enter Produce date:");scanf("%s",&hi[i].pcd);
    printf("Enter Expired date:");scanf("%s",&hi[i].exp);
    printf("Enter valid color:");scanf("%s",&hi[i].color);
    };
    printf("************\n");
    printf("About Seller\n");
    printf("Enter Seller Name   : "); scanf("%s", &hello.name);
    printf("Enter Seller ID     : "); scanf("%d", &hello.seller_id);
    printf("Seller Address: \n");
    printf("Enter House Number  : "); scanf("%d", &hello.house_number);
    printf("Enter Road          : "); scanf("%d", &hello.road);
    printf("Enter City          : "); scanf("%s", &hello.city);
    displayarray(hi,n);
    displayseller(hello);
}