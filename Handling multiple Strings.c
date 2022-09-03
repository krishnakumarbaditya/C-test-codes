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
