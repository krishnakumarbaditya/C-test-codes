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
