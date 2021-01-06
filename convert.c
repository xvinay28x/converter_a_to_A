#include<stdio.h>
int main(){
    char lower;
    printf("Write lower case Latter  : ");
    scanf("%c",&lower);
    lower = lower - 32;
    printf("Upper case Latter  : %c",lower);
    return 0;
}