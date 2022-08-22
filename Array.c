/*
1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
array values from the user.
*/
#include<stdio.h>
int main()
{
    int i,sum=0,arr[10];
    printf("Enter the elements ");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }
    printf("sum of the numbers stored in an array is %d.",sum);
    return 0;
}

/*
2. Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user
*/
#include<stdio.h>
int main()
{
    int i,sum=0,arr[10];
    float avg;
    printf("Enter the elements ");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/10.0;
    printf("average of the numbers stored in an array is %f.",avg);
    return 0;
}

/*
3. Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.
*/
#include<stdio.h>
int main()
{
    int i,od=0,ev=0,arr[10];
    printf("Enter the elements ");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0)
            ev=ev+arr[i];
        else
            od=od+arr[i];
    }
    printf("sum of even number is %d.\n",ev);
    printf("sum of odd number is %d.",od);
    return 0;
}

/*
4. Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.
*/
#include<stdio.h>
int main()
{
    int i,arr[10];
    printf("Enter the elements ");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    int max=arr[0];
    for(i=0;i<10;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    printf("Greatest number among the array is %d",max);
    return 0;
}

/*
5. Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.
*/
#include<stdio.h>
int main()
{
    int i,arr[10];
    printf("Enter the elements ");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    int min=arr[0];
    for(i=0;i<10;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    printf("Smallest number among the array is %d",min);
    return 0;
}

/*
6. Write a program to sort elements of an array of size 10. Take array values from the
user.
*/
#include<stdio.h>
int main()
{
    int i,j,arr[10];
    printf("Enter the elements ");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    printf("Number before sorting.\n");
    for(i=0;i<10;i++)
        printf("%d\t",arr[i]);
    for(i=0;i<10;i++)
    {
        int temp=0;
        for(j=i+1;j<10;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nNumber after sorting.\n");
    for(i=0;i<10;i++)
        printf("%d\t",arr[i]);
    return 0;
}

/*
7. Write a program to find second largest in an array.Take array values from the user.
*/
#include<stdio.h>
int main()
{
    int i,j,arr[7];
    int L,S_L;
    printf("Enter the elements in array.\n");
    for(i=0;i<7;i++)
        scanf("%d",&arr[i]);
    printf("Elements of array\n");
    for(i=0;i<7;i++)
        printf("%d\t",arr[i]);
    L=arr[0];
    for(i=0;i<7;i++)
    {
        if(arr[i+1]>L)
        {
            S_L=L;
            L=arr[i+1];
        }
        else if(arr[i+1]>S_L)
        {
            S_L=arr[i+1];
        }
    }
    printf("\nFirst Largest no. is %d\n",L);
    printf("Second Largest no. is %d\n",S_L);

    return 0;
}

/*
8. Write a program to find the second smallest number in an array.Take array values from the user.
*/
#include<stdio.h>
int main()
{
    int i,j,arr[7];
    int S,S_S;
    printf("Enter the elements in array.\n");
    for(i=0;i<7;i++)
        scanf("%d",&arr[i]);
    printf("Elements of array\n");
    for(i=0;i<7;i++)
        printf("%d\t",arr[i]);
    S=9999;
    S_S=9999;
    for(i=0;i<7;i++)
    {
        if(arr[i]<S)
        {
            S_S=S;
            S=arr[i];
        }

        if(arr[i]>S && arr[i]<S_S)
        {
            S_S = arr[i];
        }
    }
    printf("\nFirst Smallest no. is %d\n",S);
    printf("Second Smallest no. is %d\n",S_S);

    return 0;
}

/*
9. Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the range of array: ");
    scanf("%d",&n);
    int i,j,arr[n];
    printf("Enter the elements in array.\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);

    printf("\nPrint Elements of array in reverse order.\n");
    for(i=n-1;i>=0;i--)
        printf("%d\t",arr[i]);

    return 0;
}


/*
10. Write a program in C to copy the elements of one array into another array.Take array values from the user
*/
#include<stdio.h>
int main()
{
    int i,j,arr[10];
    int arr1[10];
    printf("Enter the elements in array1.\n");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    printf("Elements of array1\n");
    for(i=0;i<10;i++)
        printf("%d\t",arr[i]);
    for(i=0;i<10;i++)
        arr1[i]=arr[i];
    printf("\nElements of array2\n");
    for(i=0;i<10;i++)
        printf("%d\t",arr1[i]);

    return 0;
}
