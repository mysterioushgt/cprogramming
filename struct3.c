#include<stdio.h>

union stu{
    int a;
    char b;
    float c;
};
int main()
{
    union stu s;
    s.a =65;
    printf("%c" ,s.c);
    return 0;


    
}