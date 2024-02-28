#include<stdio.h>
#include<string.h>
struct emp{
    int eid;
    char ename[20];
    double esal;

};
int main(){
    struct emp e;
    e.eid=10;
    strcpy(e.ename,"saloni");
    e.esal=2000.5;
    printf("Emp id %d\n",e.eid);
    printf("Emp name %s\n" ,e.ename);
    printf("Emp sal %lf" ,e.esal);
}