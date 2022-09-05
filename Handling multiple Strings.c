/*
1. Write a program to find the number of vowels in each of the 5 strings stored in two 
dimensional arrays, taken from the user.
*/
#include<stdio.h>
int main()
{
    char vowel[5][10];
    int i,j,count;
    printf("Enter the 5 strings in array\n");
    for(i=0;i<5;i++)
    {
        scanf("%s",vowel[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%s\n",vowel[i]);
    }
    for(i=0;i<5;i++)
    {
        count=0;
        for(j=0;j<10;j++)
        {
            if(vowel[i][j]=='a' || vowel[i][j]=='e' || vowel[i][j]=='i' || vowel[i][j]=='o' || vowel[i][j]=='u')
                count++;
        }
        printf("In %d line of string total vowel is %d\n",i+1,count);
    }
    return 0;
}

//2. Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
#include<stdio.h>
#include<string.h>
int main()
{
    char city[10][20],t[20];
    int i,j;
    printf("Enter the 10 city name in array\n");
    for(i=0;i<10;i++)
    {
        gets(city[i]);
    }
    printf("Before sorting the city name.\n");
    for(i=0;i<10;i++)
    {
        printf("%s\n",city[i]);
    }
    printf("After sorting the name.\n");
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(strcmp(city[i],city[j])>0)
            {
                strcpy(t,city[i]);
                strcpy(city[i],city[j]);
                strcpy(city[j],t);
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%s \n",city[i]);
    }

    return 0;
}

//3. Write a program to read and display a 2D array of strings in C language.
#include<stdio.h>
#include<string.h>
int main()
{
    char c[10][20];
    int i;
    printf("read and display a 2D array of strings\n");
    printf("Enter a string.\n");
    for(i=0;i<3;i++)
    {
        gets(c[i]);
    }
    printf("Display the string.\n");
    for(i=0;i<3;i++)
    {
        printf("%s\n",c[i]);
    }
    return 0;
}

//4. Write a program to search a string in the list of strings.
#include<stdio.h>
#include<string.h>
int main()
{
    char c[10][20],d[5];
    int i,flag=0;
    printf("search a string in the list of strings\n");
    printf("Enter a string to find the string in given array \t");
    gets(d);
    printf("Enter the strings.\n");
    for(i=0;i<5;i++)
    {
        gets(c[i]);
    }
    for(i=0;i<5;i++)
    {
        if(strcmp(c[i],d)==0)
        {
            flag++;
            break;
        }
    }
    if(flag==1)
        printf("String is found");
    else
        printf("String is not found");
    return 0;
}

/*
5. Suppose we have a list of email addresses, check whether all email addresses have
‘@’ in it. Print the odd email out.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char c[10][20];
    int i;
    printf("check whether all email addresses have '@' in it.\n");
    printf("Enter the strings.\n");
    for(i=0;i<5;i++)
    {
        gets(c[i]);
    }
    for(i=0;i<5;i++)
    {
        if(strchr(c[i],'@')==0)
        {
            printf("Odd email is %s",c[i]);
            printf(" because @ is missing");
            break;
        }
    }
    return 0;
}

/*
6. Write a program to print the strings which are palindrome in the list of strings.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char c[3][10];
    int i,j;
    printf("print the strings which are palindrome in the list of strings.\n");
    printf("Enter the strings.\n");
    for(i=0;i<2;i++)
    {
        gets(c[i]);
    }
    for(i=0;i<2;i++)
    {
        int k=0;
        for(j=2;j>0;j--)
        {
            if(c[i][k]!=c[i][j])
                break;
            k++;
        }
        if(k>j)
            printf("string %s is palindrome.\n",c[i]);
        else
            printf("string %s is not palindrome.\n",c[i]);
    }
    return 0;
}

/*
7. From the list of IP addresses, check whether all ip addresses are valid.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char c[10][20];
    int i;
    printf("check whether all IP addresses are valid.\n");
    printf("Enter the strings.\n");
    for(i=0;i<3;i++)
    {
        gets(c[i]);
    }
    for(i=0;i<3;i++)
    {
        if(strchr(c[i],'@')!=0)
        {
            printf("Valid IP addresses are \n");
            printf("%s\n",c[i]);
        }
        else
        {
            printf("Non-Valid IP addresses are %s",c[i]);
            printf(" because @ is missing\n");
        }
    }
    return 0;
}

/*
9. Write a program that asks the user to enter a username. If the username entered is
one of the names in the list then the user is allowed to calculate the factorial of a
number. Otherwise, an error message is displayed
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[3][10],ch1[10];
    int i;
    int num=5,fact=1,flag=0;
    printf("Enter some user name.\n");
    for(i=0;i<3;i++)
    {
        gets(ch[i]);
    }
    printf("Asks the user to enter a username.\n");
    gets(ch1);
    for(i=0;i<3;i++)
    {
        if(strcmp(ch[i],ch1)==0)
        {
            flag++;
            for(i=1;i<=num;i++)
            fact=fact*i;
            break;
        }
    }
    if(flag==1)
    {
        printf("Username is found and user is allowed to calculate the factorial.\n");
        printf("Factorial is %d",fact);
    }
    else
    {
        printf("Username is not found and user is not allowed to calculate the factorial.\n");
    }

}
