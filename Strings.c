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

//7. Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include<stdio.h>
int main()
{
    char c[10];
    int i;
    printf("Count the total number of alphabets, digits and special characters in a string.\n");
    printf("Enter a string\n");
    scanf("%s",c);
    fflush(stdin);
    printf("Given string is %s.\n",c);

    int count=0;
    int count1=0;
    int count2=0;

    for(i=0;c[i];i++)
    {
        if((c[i]>='a' && c[i]<='z') || (c[i]>='A' && c[i]<='Z'))
            count++;
        else if(c[i]>='0' && c[i]<='9')
            count1++;
        else
            count2++;

    }
    printf("Total number of alphabets %d.\n",count);
    printf("Total  digits in a string %d.\n",count1);
    printf("Total  special characters in a string %d.",count2);
    return 0;
}

//8. Write a program in C to copy one string to another string.
#include<stdio.h>
int main()
{
    char c[10],c1[10];
    int i;
    printf("copy one string to another string.\n");
    printf("Enter 1st array string\n");
    scanf("%s",c);
    fflush(stdin);
    printf("Given string in 1st array is %s.\n",c);

    for(i=0;c[i];i++)
    {
        c1[i]=c[i];
    }
    printf("String of 1st array in 2nd array is %s.\n",c1);

    return 0;
}

//9. Write a C program to sort a string array in ascending order.
#include<stdio.h>
int main()
{
    char c[10];
    int i,j;
    printf("sort a string array in ascending order.\n");
    printf("Enter a string\n");
    scanf("%s",c);
    fflush(stdin);
    printf("Before sorting the array %s.\n",c);
    char temp;
    for(i=0;c[i];i++);
    int len=i;
    for(j=1;j<len;j++)
    {
        for(i=0;i<len-j;i++)
        {
            if(c[i]>c[i+1])
            {
                temp=c[i];
                c[i]=c[i+1];
                c[i+1]=temp;
            }
        }
    }
    printf("after sorting the array in ascending order is %s.\n",c);
    return 0;
}
