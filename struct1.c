#include<stdio.h>

struct stu{
    int sroll;
    char sname;
    int marks[5];
};
int main(){
    struct stu s;
    int total=0,i;
    float avg;
    printf("enter Sroll:");
    scanf("%d",&s.sroll);
    printf("enter Sname");
    scanf("%s",&s.sname);
    printf("enter 5 sub marks");
    for(i=0;i<5;i++){
        scanf("%d",&s.marks[i]);
        total=total+s.marks[i];
        avg=(float)total/5;
    }
    printf("sroll:%d\n" ,s.sroll);
     printf("sname:%s\n" ,s.sname);
      printf("stotal marks :%d\n" ,total);
       printf("savg:%f\n" ,avg);
       return 0;

}