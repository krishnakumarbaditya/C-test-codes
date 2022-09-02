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

//2. Write a function to reverse a string.
void reverse(char[]);
#include<stdio.h>
int main()
{
    char ch[10];
    printf("Enter a string : ");
    scanf("%s",ch);
    fflush(stdin);
    printf("Given String is \n");
    printf("%s",ch);
    reverse(ch);
    return 0;
}
void reverse(char ch1[])
{
    int i;
    for(i=0;ch1[i];i++);
    int l=i;
    int temp;
    for(i=0;i<l/2;i++)
    {
        temp=ch1[i];
        ch1[i]=ch1[l-i-1];
        ch1[l-i-1]=temp;
    }
    printf("\nReverse string is %s.",ch1);
}

//4. Write a function to transform string into uppercase
void upper(char[]);
#include<stdio.h>
int main()
{
    char ch[10];
    printf("Enter a string : ");
    scanf("%s",ch);
    fflush(stdin);
    printf("Given String is \n");
    printf("%s",ch);
    upper(ch);
    return 0;
}
void upper(char ch1[])
{
    int i;

    for(i=0;ch1[i];i++)
    {
        if(ch1[i]>='a' && ch1[i]<='z')
        {
            ch1[i]=ch1[i]-32;
        }
    }
    printf("\nstring into uppercase is %s.",ch1);
}

//5. Write a function to transform string into lowercase
void lower(char[]);
#include<stdio.h>
int main()
{
    char ch[10];
    printf("Enter a string : ");
    scanf("%s",ch);
    fflush(stdin);
    printf("Given String is \n");
    printf("%s",ch);
    lower(ch);
    return 0;
}
void lower(char ch1[])
{
    int i;

    for(i=0;ch1[i];i++)
    {
        if(ch1[i]>='A' && ch1[i]<='Z')
        {
            ch1[i]=ch1[i]+32;
        }
    }
    printf("\nstring into lowercase is %s.",ch1);
}
