//1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int greatest(int[],int);
int main()
{
    int a[5];
    printf("%d is greatest number among the elements",greatest(a,5));
    return 0;
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

//2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int smallest(int[],int);
int main()
{
    int a[5];
    printf("%d is smallest number among the elements",smallest(a,5));
    return 0;
}
int smallest(int b[],int n)
{
    int i;
    printf("Enter the numbers of element.");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    int min=b[0];
    for(i=0;i<n;i++)
    {
        if(b[i]<=min)
        {
            min=b[i];
        }
    }
    return min;
}

//3. Write a function to sort an array of any size. (TSRS)
#include<stdio.h>
void sort(int[],int);
int main()
{
    int a[5];
    sort(a,5);
    return 0;
}
void sort(int b[],int n)
{
    int i,j;
    printf("Enter the numbers of element.");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    printf("\nNumber before sorting.\n");
    for(i=0;i<n;i++)
        printf("%d\t",b[i]);
    int temp=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[j]<b[i])
            {
                temp=b[j];
                b[j]=b[i];
                b[i]=temp;
            }
        }
    }
    printf("\nNumber after sorting.\n");
    for(i=0;i<n;i++)
        printf("%d\t",b[i]);
}

/*
6. Write a function in C to read n number of values in an array and display it in reverse
order.
*/
#include<stdio.h>
void reverse(int[],int);
int main()
{
    int a[5];
    reverse(a,5);
    return 0;
}
void reverse(int b[],int n)
{
    int i;
    printf("Enter the elements in array.\n");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n;i++)
        printf("%d\t",b[i]);

    printf("\nPrint Elements of array in reverse order.\n");
    for(i=n-1;i>=0;i--)
        printf("%d\t",b[i]);

    return 0;
}

/*
7. Write a function in C to count a total number of duplicate elements in an array.
*/
#include<stdio.h>
int count(int[],int);
int main()
{
    int a[5];
    printf("\nTotal number of duplicate elements in an array %d.",count(a,5));
    return 0;
}
int count(int b[],int n)
{
    int i,j;

    printf("Enter the elements in array.\n");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    printf("\nAll elements in the array.\n");
    for(i=0;i<n;i++)
        printf("%d\t",b[i]);
    int count=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]==b[j])
            {
                count++;
                break;
            }
        }
    }
    return count;
}


/*
8. Write a function in C to print all unique elements in an array.
*/
#include<stdio.h>
void unique(int[],int);
int main()
{
    int a[5];
    unique(a,5);
    return 0;
}
void unique(int b[],int n)
{
    int i,j;
    printf("Enter the elements in array.\n");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    printf("\nAll elements in the array.\n");
    for(i=0;i<n;i++)
        printf("%d\t",b[i]);

    printf("\nPrint all unique elements in an array.\n");
    for(i=0;i<n;i++)
    {
        int count=0;
        for(j=0;j<n;j++)
        {
            if(b[i]==b[j])
            {
                count++;
                if(count<=1)
                    continue;
                else
                    break;
            }
        }
        if(count==1)
            printf("%d\t",b[i]);
    }
}
