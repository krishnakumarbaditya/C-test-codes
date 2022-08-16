//1.Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int LCM(int);
int main()
{
    int no,no1,lcm;
    printf("Enter two numbers ");
    scanf("%d %d",&no,&no1);
    lcm=LCM(no,no1);
    printf("LCM of %d and %d number is %d",no,no1,lcm);
    return 0;
}
int LCM(int no2,int no3)
{
    int l,i;
    l=no2>no3?no2:no3;
    for(i=l;i<=no2*no3;i++)
    {
        if(i%no2==0 && i%no3==0)
        {
            return i;
            break;
        }

    }
}

//2. Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int HCF(int);
int main()
{
    int no,no1,hcf;
    printf("Enter two numbers ");
    scanf("%d %d",&no,&no1);
    hcf=HCF(no,no1);
    printf("HCF of %d and %d number is %d",no,no1,hcf);
    return 0;
}
int HCF(int no2,int no3)
{
    int h,i;
    h=no2<no3?no2:no3;
    for(i=h;h>=1;i--)
    {
        if(no2%i==0 && no3%i==0)
        {
            return i;
            break;
        }
    }
}

//3. Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int PRIME(int);
int main()
{
    int no,prime;
    printf("Enter a number ");
    scanf("%d",&no);
    if(PRIME(no)==1)
        printf("%d is prime number.",no);
    else
        printf("%d is not prime number.",no);
    return 0;
}
int PRIME(int no2)
{
    int i;
    for(i=2;i<no2;i++)
    {
        if(no2%i==0)
            break;
    }
    if(i==no2)
        return 1;
    else
        return 0;
}

//4. Write a function to find the next prime number of a given number. (TSRS)

#include<stdio.h>
int NEXTPRIME(int);
int main()
{
    int no,nxtprime;
    printf("Enter a number ");
    scanf("%d",&no);
    nxtprime=NEXTPRIME(no);
    printf("%d is next prime number of %d.",nxtprime,no);
    return 0;
}
int NEXTPRIME(int no2)
{
    int i,j;
    for(j=no2+1;j>=1;j++)
    {
        for(i=2;i<j;i++)
        {
            if(j%i==0)
                break;
        }
        if(i==j)
            break;
    }
    return j;
}

//5. Write a function to print first N prime numbers (TSRN)

#include<stdio.h>
void PRIME(int);
int main()
{
    int no;
    printf("print first N prime numbers.\n");
    printf("Enter a number ");
    scanf("%d",&no);
    PRIME(no);
    return 0;
}
void PRIME(int no2)
{
    int i,j,a=0;
    for(j=1;j<=j;j++)
    {
        for(i=2;i<j;i++)
        {
            if(j%i==0)
                break;
        }
        if(i==j)
        {
            printf("%d\n",j);
            a++;
            if(a==no2)
                break;
        }

    }
}

//6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
void PRIME(int,int);
int main()
{
    int no,no1;
    printf("print all Prime numbers between two given numbers.\n");
    printf("Enter two numbers ");
    scanf("%d %d",&no,&no1);
    PRIME(no,no1);
    return 0;
}
void PRIME(int no2,int no3)
{
    int i,j;
    for(j=no2+1;j<no3;j++)
    {
        for(i=2;i<j;i++)
        {
            if(j%i==0)
                break;
        }
        if(i==j)
        {
            printf("%d\n",j);
        }
    }
}

//7. Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
void Fibonacci(int);
int main()
{
    int no;
    printf("print first N terms of Fibonacci series.\n");
    printf("Enter a numbers ");
    scanf("%d",&no);
    Fibonacci(no);
    return 0;
}

//9. Write a program in C to find the square of any number using the function.

#include<stdio.h>
#include<math.h>
int square(double);
int main()
{
    int no,sq;
    printf("find the square of any number using the function.\n");
    printf("Enter a numbers ");
    scanf("%d",&no);
    sq=square(no);
    printf("Square of %d is %d.",no,sq);
    return 0;
}
int square(double no2)
{
    int sq;
    sq=pow(no2,2);
    return sq;
}

void Fibonacci(int no2)
{
    int a,b,c;
    a=-1;
    b=1;
    while(no2)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
        no2--;
    }
}
