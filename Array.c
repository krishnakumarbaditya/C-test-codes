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
