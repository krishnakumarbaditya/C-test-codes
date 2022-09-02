//1. Write a function to calculate length of the string
int length(char[]);
#include<stdio.h>
int main()
{
    char ch[10];
    printf("Enter a string : ");
    scanf("%s",ch);
    fflush(stdin);
    printf("Given String is \n");
    printf("%s",ch);
    printf("\nlength of the string is %d",length(ch));
    return 0;
}
int length(char ch1[])
{
    int i;
    for(i=0;ch1[i];i++);
    return i;
}
