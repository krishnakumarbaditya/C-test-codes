//1. Write a program to calculate the length of the string. (without using built-in method)
#include<stdio.h>
int main()
{
    char c[10];
    int i;
    printf("calculate the length of the string.\n");
    printf("Enter a string \n");
    scanf("%s",c);
    printf("Given string is %s.\n",c);
    for(i=0;c[i];i++);
    printf("Length of the string is %d.",i);
}
