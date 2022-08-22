//1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int greatest(int[],int);
int main()
{
    int a[5];
    printf("%d is greatest number among the elements",greatest(a,5));
}
int greatest(int b[],int n)
{
    int i;
    printf("Enter the numbers of element.");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    int max=b[0];
    for(i=0;i<n;i++)
    {
        if(b[i]>=max)
        {
            max=b[i];
        }
    }
    return max;
}
