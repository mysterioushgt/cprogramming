#include<stdio.h>
struct mystructure
{
    int mynum;
    char myletter;

};
int main(){
    struct mystructure s;

    s.mynum=5;
    s.myletter='A';
    printf("%d\n",s.mynum);
    printf("%c\n",s.myletter);
}