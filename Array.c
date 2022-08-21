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
