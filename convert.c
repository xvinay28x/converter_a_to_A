#include<stdio.h>
int main(){
    char lower;
    printf("Write lower case Letter  : ");
    scanf("%c",&lower);
    lower = lower - 32;
    printf("Upper case Letter  : %c",lower);
    return 0;
}