//1. Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area(float);
int main()
{
    
    float r;
    printf("Enter the radius of the circle ");
    scanf("%f",&r);
    printf("Area of a circle is %f",area(r));
    return 0;
}
float area(float r)
{
    float area;
    area=3.14*r*r;
    return area;
}

//2. Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float SI(float,float,float);
int main()
{
    float p,r,t,s;
    printf("Enter the principle amount ");
    scanf("%f",&p);
    printf("Enter the rate ");
    scanf("%d",&r);
    printf("Enter the time ");
    scanf("%d",&t);
    s=SI(p,r,t);
    printf("Simple Interest is %f ",s);
    return 0;

}
float SI(float p1,float r1,float t1)
{
    float s1;
    s1=(p1*r1*t1)/100;
    return s1;
}

/*
3. Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS)
*/
#include<stdio.h>
int check(int);
int main()
{
    int no;
    printf("Enter a number ");
    scanf("%d",&no);
    if(check(no)==1)
        printf("%d is even.",no);
    else
        printf("%d is odd.",no);
    return 0;
}
int check(int no1)
{
    if(no1%2==0)
        return 1;
    else
        return 0;
}

//4. Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void natural(int);
int main()
{
    int no;
    printf("print first N natural numbers\n");
    printf("Enter the number ");
    scanf("%d",&no);
    natural(no);
    return 0;
}
void natural(int no1)
{
    for(int i=1;i<=no1;i++)
    {
        printf("%d\n",i);
    }
}

//5. Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void odd(int);
int main()
{
    int no;
    printf("print first N odd natural numbers\n");
    printf("Enter the number ");
    scanf("%d",&no);
    odd(no);
    return 0;
}
void odd(int no1)
{
    for(int i=1;i<=no1;i++)
    {
        printf("%d\n",i*2-1);
    }
}

//6. Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int fact(int);
int main()
{
    int no,fact2;
    printf("calculate the factorial of a number.\n");
    printf("Enter the number ");
    scanf("%d",&no);
    fact2=fact(no);
    printf("Factorial of %d is %d",no,fact2);
    return 0;
}
int fact(int no1)
{
    int fact1=1;
    while(no1)
    {
        fact1=fact1*no1;
        no1--;
    }
    return fact1;
}

/*
7. Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS)
*/
#include<stdio.h>
int combination(int ,int ,int );
int main()
{
    int n,r,a,comb1;
    printf("calculate the number of combinations one can make from n items and r selected at a time.\n");
    printf("Enter the number for n and r ");
    scanf("%d %d",&n,&r);
    a=n-r;
    comb1=combination(n,r,a);
    printf("combinations one can make from %d items and %d selected at a time is %d",n,r,comb1);
    return 0;
}
int combination(int n,int r,int a)
{
    int n1=1;
    while(n)
    {
        n1=n1*n;
        n--;
    }

    int r1=1;
    while(r)
    {
        r1=r1*r;
        r--;
    }

    int a1=1;
    while(a)
    {
        a1=a1*a;
        a--;
    }

    int comb;
    comb=n1/(a1*r1);
    return comb;
}

/*
8. Write a function to calculate the number of arrangements one can make from n items
and r selected at a time. (TSRS)
*/
#include<stdio.h>
int arrangements(int ,int );
int main()
{
    int n,r,arrng1;
    printf("calculate the number of arrangements one can make from n items and r selected at a time.\n");
    printf("Enter the number for n and r ");
    scanf("%d %d",&n,&r);
    arrng1=arrangements(n,r);
    printf("arrangements one can make from %d items and %d selected at a time is %d",n,r,arrng1);
    return 0;
}
int fact(int no1)
{
    int fact1=1;
    while(no1)
    {
        fact1=fact1*no1;
        no1--;
    }
    return fact1;
}
int arrangements(int n,int r)
{
    int arrng;
    arrng=fact(n)/fact(n-r);
    return arrng;
}


//9. Write a function to check whether a given number contains a given digit or not. (TSRS)
#include<stdio.h>
int check();
int no2;
int main()
{
    int no,check1;
    printf("check whether a given number contains a given digit or not.\n");
    no=235;
    printf("Given number is %d\n",no);
    printf("Enter the number to check ");
    scanf("%d",&no2);
    check1=check(no);
    if(check1==1)
        printf("Digit is their in number.");
    else
        printf("Digit is not their in number.");
    return 0;

}
int check(int no1)
{
    int rem;
    while(no1)
    {
        rem=no1%10;
        if(rem==no2)
            break;
        no1=no1/10;
    }
    if(rem==no2)
        return 1;
    else
        return 0;
}

/*
10. Write a function to print all prime factors of a given number. For example, if the
number is 36 then your result should be 2, 2, 3, 3. (TSRN)
*/
#include<stdio.h>
void prime();
int main()
{
    int no;
    printf("Enter a number ");
    scanf("%d",&no);
    prime(no);
    return 0;
}
void prime(int no1)
{
    int i;
    for(i=2;no1>1;i++)
    {
        while(no1%i==0)
        {
            printf("%d\t",i);
            no1=no1/i;
        }
    }

}
