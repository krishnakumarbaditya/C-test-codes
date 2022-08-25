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
    return 0;
}

//3. Write a program in C to find the transpose of a given matrix.

#include<stdio.h>
int main()
{
    int a[3][3],b[3][3];
    int i,j;
    printf("Enter the number of elements in matrices.\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Before transpose of given matrix.\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("After transpose of given matrix.\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=a[j][i];
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
    return 0;
}

//4. Write a program in C to find the sum of right diagonals of a matrix.

#include<stdio.h>
int main()
{
    int a[3][3],b[3][3];
    int i,j,sum=0;
    printf("Enter the number of elements in matrices.\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Number of elements in given matrix.\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("sum of right diagonals of given matrix is %d.\n",sum);
    return 0;
}

//5. Write a program in C to find the sum of left diagonals of a matrix.

#include<stdio.h>
int main()
{
    int a[3][3],b[3][3];
    int i,j,sum=0;
    printf("Enter the number of elements in matrices.\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Number of elements in given matrix.\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    int m=3;
    for(i=0;i<3;i++)
    {
        m=m-1;
        for(j=0;j<3;j++)
        {
            if(j==m)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("sum of left diagonals of given matrix is %d.\n",sum);
    return 0;
}

//6. Write a program in C to find the sum of rows and columns of a Matrix.

#include<stdio.h>
int main()
{
    int a[3][3],b[3][3];
    int i,j,rsum=0,csum=0;
    printf("Enter the number of elements in matrices.\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Number of elements in given matrix.\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            rsum=rsum+a[i][j];
        }
        printf("%d row sum is %d.\n",i+1,rsum);
        rsum=0;
    }
    printf("\n");
    for(j=0;j<3;j++)
    {
        for(i=0;i<3;i++)
        {
            csum=csum+a[i][j];
        }
        printf("%d column sum is %d.\n",j+1,csum);
        csum=0;
    }
    return 0;
}

//7. Write a program in C to print or display the lower triangular of a given matrix.

#include<stdio.h>
int main()
{
    int a[3][3],b[3][3];
    int i,j,rsum=0,csum=0;
    printf("Enter the number of elements in matrices.\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Number of elements in given matrix.\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i<j)
                a[i][j]=0;
        }
    }
    printf("Display the lower triangular of a given matrix.\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//8. Write a program in C to print or display the upper triangular of a given matrix.

#include<stdio.h>
int main()
{
    int a[3][3],b[3][3];
    int i,j,rsum=0,csum=0;
    printf("Enter the number of elements in matrices.\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Number of elements in given matrix.\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i>j)
                a[i][j]=0;
        }
    }
    printf("Display the upper triangular of a given matrix.\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
