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
