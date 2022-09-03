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

//3. Write a function to compare two strings.
void compare(char[],char[],int);
#include<stdio.h>
int main()
{
    char ch[20];
    char ch1[20];
    int i;
    printf("Enter 1st string : ");
    gets(ch);
    fflush(stdin);
    printf("Enter 2nd string : ");
    gets(ch1);
    fflush(stdin);

    printf("1st String is \n");
    printf("%s\n",ch);
    fflush(stdin);
    printf("2nd String is \n");
    printf("%s\n",ch1);

    for(i=0;ch1[i];i++);
    int l = i;
    compare(ch,ch1,l);

    return 0;
}
void compare(char ch1[],char ch2[],int l)
{
    int i;
    for(i=0;i<l;i++)
    {
        if(ch1[i]==ch2[i])
            continue;
        else
            break;
    }
    if(i==l)
        printf("String value is equal");
    else
        printf("String value is not equal");
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
/*
6. Write a function to check whether a given string is an alphanumeric string or not.
(Alphanumeric string must contain at least one alphabet and one digit)
*/
int alphanumeric(char[],int);
#include<stdio.h>
int main()
{
    char ch[20];
    int i;
    printf("Enter a string : ");
    gets(ch);
    fflush(stdin);

    printf("String is %s.\n",ch);
    fflush(stdin);

    for(i=0;ch[i];i++);
    int l = i;
    if(alphanumeric(ch,l)==1)
        printf("String is alphanumeric");
    else
        printf("String is not alphanumeric");

    return 0;
}
int alphanumeric(char ch1[],int l)
{
    int i;
    for(i=0;i<l;i++)
    {
        if((ch1[i]>='A' || ch1[i]<='Z') || (ch1[i]>='a' || ch1[i]<='z') || (ch1[i]>='0' || ch1[i]<='9'))
            return 1;
        else
            return 0;
    }

}

/*
7. Write a function to check whether a given string is palindrome or not.
*/
void palindrome(char[],int,int);
#include<stdio.h>
int main()
{
    char ch[20];
    int i;
    printf("Enter a string : ");
    gets(ch);
    fflush(stdin);

    printf("String is %s.\n",ch);
    fflush(stdin);

    for(i=0;ch[i];i++);
    int l = i;
    palindrome(ch,0,l-1);
    return 0;
}
void palindrome(char ch1[],int i,int l)
{
    while(i<=l)
    {
        if(ch1[i]!=ch1[l])
            break;
        i++;
        l--;
    }
    if(i>l)
        printf("String is palindrome");
    else
        printf("String is not palindrome");
}

/*
8. Write a function to count words in a given string
*/
void count(char[],int,int);
#include<stdio.h>
int main()
{
    char ch[20];
    int i;
    printf("Enter a string : ");
    gets(ch);
    fflush(stdin);

    printf("String is %s.\n",ch);
    fflush(stdin);

    for(i=0;ch[i];i++);
    int l = i;
    count(ch,0,l-1);
    return 0;
}
void count(char ch1[],int i,int l)
{
    int count=1;
    while(i<=l)
    {
        if(ch1[i]==' ' && ch1[i+1]!=' ')
            count++;
        i++;
    }
    printf("Total Word is %d.",count);

}


/*
9. Write a function to reverse a string word wise. (For example if the given string is
“Mysirg Education Services” then the resulting string should be “Services Education
Mysirg” )
*/
void reverse(char[],int,int);
#include<stdio.h>
int main()
{
    char ch[20];
    int i=0,start=0,end=0,flag=0;
    printf("Enter a string : ");
    gets(ch);
    fflush(stdin);
    printf("Given String is \n");
    printf("%s\n",ch);
    while(ch[i]!='\0')
    {
        while(ch[i]!=' ')
        {
            if(ch[i]=='\0')
            {
                flag=1;
                break;
            }
            end++;
            i++;
        }
        reverse(ch,start,end-1);
        if(flag==1)
            break;
        start=end++;
        i++;
    }
    reverse(ch,0,i-1);
    printf("%s",ch);
    return 0;
}
void reverse(char ch1[],int i,int j)
{
    int temp;
    while(i<=j)
    {
        temp=ch1[i];
        ch1[i]=ch1[j];
        ch1[j]=temp;
        i++;
        j--;
    }
}

/*
10. Write a function to find the repeated character in a given string
*/
void repeated(char[],int[]);
#include<stdio.h>
int main()
{
    char ch[20];
    int fr[150]={0};
    int i;
    printf("Enter a string : ");
    gets(ch);
    fflush(stdin);

    printf("String is %s.\n",ch);
    fflush(stdin);

    repeated(ch,fr);
    return 0;
}
void repeated(char ch1[],int fr[])
{
    int i,flag;
    for(i=0;ch1[i];i++)
    {
        fr[ch1[i]]++;
    }
    printf("Repeated elements in array are \n");
    for(i=0;i<150;i++)
    {
        if(fr[i]>1)
            printf("%c ",i);
    }
}

