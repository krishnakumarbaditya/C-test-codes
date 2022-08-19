//1. Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>
int natural(int);

int main()
{
    int no,sum;
    printf("calculate sum of first N natural numbers ");
    scanf("%d",&no);
    sum=natural(no);
    printf("Sum of the first %d natural number is %d.",no,sum);
    return 0;
}
int natural(int no1)
{
    int sum;
    if(no1)
    {
        sum=no1+natural(no1-1);
        return sum;
    }
}

//2. Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int oddnatural(int);

int main()
{
    int no,sum1;
    printf("calculate sum of first N odd natural numbers ");
    scanf("%d",&no);
    sum1=oddnatural(no);
    printf("Sum of the first %d odd natural number is %d.",no,sum1);
    return 0;
}
int oddnatural(int no1)
{
    int sum;
    if(no1)
    {
        sum=(no1*2-1)+oddnatural(no1-1);
        return sum;
    }
}

//3. Write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>
int evennatural(int);

int main()
{
    int no,sum1;
    printf("calculate sum of first N even natural numbers ");
    scanf("%d",&no);
    sum1=evennatural(no);
    printf("Sum of the first %d even natural number is %d.",no,sum1);
    return 0;
}
int evennatural(int no1)
{
    int sum;
    if(no1)
    {
        sum=(no1*2)+evennatural(no1-1);
        return sum;
    }
}
