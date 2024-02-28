#include<stdio.h>
int main(){
    char vowel;
    printf("enter the vowel\n");
    scanf("%c",&vowel);
    switch ((vowel))
   {
    case 'a':
    printf("the position a in alphabet is 1\n");
    break;
    case 'e':
    printf("the position e in alphabet is 5\n");
    break;
    case 'i':
    printf("the position i in alphabet is 9\n");
    break;
    case 'o':
    printf("the position o in alphabet is 15\n");
    break;
    case 'u':
    printf("the position a in alphabet is 21\n");
    break;
    default:
    printf("invalid vowel");
    break;
   }
}