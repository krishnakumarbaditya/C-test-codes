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

//4. Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int square(int);

int main()
{
    int no,sum1;
    printf("calculate sum of squares of first n natural numbers ");
    scanf("%d",&no);
    sum1=square(no);
    printf("Sum of the squares of first %d natural numbers is %d.",no,sum1);
    return 0;
}
int square(int no1)
{
    int sum;
    if(no1)
    {
        sum=(no1*no1)+square(no1-1);
        return sum;
    }
}

//5. Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int digits(int);

int main()
{
    int no,sum1;
    printf("calculate sum of digits of a given number ");
    scanf("%d",&no);
    sum1=digits(no);
    printf("Sum of the digits of %d is %d.",no,sum1);
    return 0;
}
int digits(int no1)
{
    int sum;
    if(no1)
    {
        sum=digits(no1/10)+(no1%10);
        return sum;
    }
}

//6. Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int fact(int);

int main()
{
    int no,fact1;
    printf("calculate factorial of a given number ");
    scanf("%d",&no);
    fact1=fact(no);
    printf("factorial of %d is %d.",no,fact1);
    return 0;
}
int fact(int no1)
{
    int fact1;
    if(no1==0 || no1==1)
        return 1;
    fact1=no1*fact(no1-1);
}

//7. Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int HCF(int,int);
int main()
{
    int no,no1;
    printf("calculate HCF of two numbers ");
    scanf("%d %d",&no,&no1);
    printf("%d",HCF(no,no1));
    return 0;
}
int HCF(int no1,int no2)
{
    if(no1%no2==0)
        return no2;
    else if(no2%no1==0)
        return no1;
    if(no1>no2)
        HCF(no1%no2,no2);
    else
        HCF(no1,no2%no1);
}

//8. Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>
int fib(int);
int main()
{
    int no;
    printf("print first N terms of Fibonacci series ");
    scanf("%d",&no);
    for(int n=1;n<=no;n++)
    {
        printf("%d\t",fib(n));
    }

    return 0;
}
int fib(int no1)
{
    int c;
    if(no1==0 || no1==1)
        return no1;
    return (fib(no1-1)+fib(no1-2));
}
