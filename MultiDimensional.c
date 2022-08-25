//1. Write a program to calculate the sum of two matrices each of order 3x3.

#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j;
    printf("Enter the number first matrices.\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the number second matrices.\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    printf("summation of two matrices are : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {         
            c[i][j]=a[i][j]+b[i][j];      
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//2. Write a program to calculate the product of two matrices each of order 3x3.

#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j,k,sum=0;
    printf("Enter the number first matrices.\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the number second matrices.\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    printf("Product of two matrices are : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                sum=sum+(a[i][k]*b[k][j]);
            }
            c[i][j]=sum;
            sum=0;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
