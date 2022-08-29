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
    return 0;
}

//2. Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
int main()
{
    char c[10],c1;
    int i,count=0;
    printf("count the occurrence of a given character in a given string.\n");
    printf("Enter a string\n");
    scanf("%s",c);
    fflush(stdin);
    printf("Given string is %s.\n",c);
    printf("Enter a character\n");
    scanf("%c",&c1);
    fflush(stdin);

    for(i=0;c[i];i++)
    {
        if(c1==c[i])
            count++;
    }
    printf("occurrence of '%c' character in a given string is %d.",c1,count);
    return 0;
}

//3. Write a program to count vowels in a given string.
#include<stdio.h>
int main()
{
    char c[10];
    int i,count=0;
    printf("count vowels in a given string.\n");
    printf("Enter a string\n");
    scanf("%s",c);
    fflush(stdin);
    printf("Given string is %s.\n",c);
    for(i=0;c[i];i++)
    {
        if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u' || c[i]=='A' || c[i]=='E' || c[i]=='I' || c[i]=='O' || c[i]=='U')
        {
            count++;
        }
    }
    printf("count vowels in a given string is %d.",count);
    return 0;
}

//4. Write a program to convert a given string into uppercase
#include<stdio.h>
int main()
{
    char c[10];
    int i,uppercase;
    printf("convert a given string into uppercase.\n");
    printf("Enter a string\n");
    scanf("%s",c);
    fflush(stdin);
    printf("Given string is %s.\n",c);
    for(i=0;c[i];i++)
    {
        if(c[i]>='a' && c[i]<='z')
        {
            c[i]=c[i]-32;
        }
    }
    printf("convert a given string into uppercase is %s.",c);
    return 0;
}

//5. Write a program to convert a given string into lowercase
#include<stdio.h>
int main()
{
    char c[10];
    int i,uppercase;
    printf("convert a given string into lowercase.\n");
    printf("Enter a string\n");
    scanf("%s",c);
    fflush(stdin);
    printf("Given string is %s.\n",c);
    for(i=0;c[i];i++)
    {
        if(c[i]>='A' && c[i]<='Z')
        {
            c[i]=c[i]+32;
        }
    }
    printf("convert a given string into lowercase is %s.",c);
    return 0;
}

//6. Write a program to reverse a string.
#include<stdio.h>
int main()
{
    char c[10];
    int i,rev;
    printf("Reverse a string.\n");
    printf("Enter a string\n");
    scanf("%s",c);
    fflush(stdin);
    printf("Given string is %s.\n",c);
    for(i=0;c[i];i++);
    int len=i;
    int temp;
    for(i=0;i<len/2;i++)
    {
        temp=c[i];
        c[i]=c[len-i-1];
        c[len-i-1]=temp;
    }
    printf("Reverse string is %s.",c);
    return 0;
}
