#include<stdio.h>

//data share
//memory share kar lete hai
union stu{
    int a;
    int b;
};
int main()
{
    union stu s;
    s.a=65;
    printf("%d" ,s.b);
    return 0;



}