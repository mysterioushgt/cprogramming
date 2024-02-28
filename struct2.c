#include<stdio.h>
//store five students record using structure
struct student
{
    int roll;
    char name[20];
    float marks;
};
int main(){
    struct student s[5];
    int i;
    printf("enter students record\n\n");

    for(i=0; i<5; i++)
    {
        printf("enter Sroll:");
        scanf("%d",&s[i].roll);
        printf("Enter Sname:");
        scanf("%s",&s[i].name);
        printf("Enter Smarks:");
        scanf("%f",&s[i].marks);
    }
    printf("students record\n\n");

    for(int i=0; i<5 ;i++){
        printf("Sroll :%d\n" ,s[i].roll);

        printf("Sname: %s\n" ,s[i].name);

        printf("Smarks: %f\n" ,s[i].marks);
    }
    return 0;

    
}