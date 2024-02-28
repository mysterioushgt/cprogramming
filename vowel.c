#include <stdio.h>
int main()
{
    // a e i o u--->vowel

    char ch;
    printf("enter any character:");
    scanf("%c", &ch);
   if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A')
    {
        printf("character is vowel");
    }
    else
    {
        printf("character is consonent");
    }
}