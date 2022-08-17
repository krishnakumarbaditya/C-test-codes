//1. Write a recursive function to print first N natural numbers

#include<stdio.h>
void natural(int);
int main()
{
    int no;
    printf("print first N natural numbers.\n");
    scanf("%d",&no);
    natural(no);
    return 0;
}
void natural(int no1)
{
    if(no1>0)
    {
        natural(no1-1);
        printf("%d\t",no1);
    }
}

//2. Write a recursive function to print first N natural numbers in reverse order.

#include<stdio.h>
void natural(int);
int no3;
int main()
{
    printf("print first N natural numbers in reverse order.\n");
    scanf("%d",&no3);
    natural(1);
    return 0;
}
void natural(int no1)
{
    if(no1<=no3)
    {
        natural(no1+1);
        printf("%d\t",no1);
    }
}

//3. Write a recursive function to print first N odd natural numbers.

#include<stdio.h>
void odd(int);

int main()
{
    int no;
    printf("print first N odd natural numbers.\n");
    scanf("%d",&no);
    odd(no);
    return 0;
}
void odd(int no1)
{
    int od;
    if(no1>0)
    {
        odd(no1-1);
        od=no1*2-1;
        printf("%d\t",od);
    }
}

//4. Write a recursive function to print first N odd natural numbers in reverse order.

#include<stdio.h>
void odd(int);
int no3;
int main()
{
    int no;
    printf("print first N odd natural numbers in reverse order.");
    scanf("%d",&no3);
    odd(1);
    return 0;
}
void odd(int no1)
{
    int od;
    if(no1<=no3)
    {
        odd(no1+1);
        od=no1*2-1;
        printf("%d\t",od);
    }
}

//5. Write a recursive function to print first N even natural numbers.

#include<stdio.h>
void even(int);

int main()
{
    int no;
    printf("print first N even natural numbers.");
    scanf("%d",&no);
    even(no);
    return 0;
}
void even(int no1)
{
    int ev;
    if(no1>0)
    {
        even(no1-1);
        ev=no1*2;
        printf("%d\t",ev);
    }
}

//6. Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
void even(int);
int no3;
int main()
{
    int no;
    printf("print first N even natural numbers in reverse order.");
    scanf("%d",&no3);
    even(1);
    return 0;
}
void even(int no1)
{
    int ev;
    if(no1<=no3)
    {
        even(no1+1);
        ev=no1*2;
        printf("%d\t",ev);
    }
}

//7. Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
#include<math.h>
void square(int);

int main()
{
    int no;
    printf("print squares of first N natural numbers.");
    scanf("%d",&no);
    square(no);
    return 0;
}
void square(int no1)
{
    int sq;
    if(no1>0)
    {
        square(no1-1);
        sq=pow(no1,2);
        printf("%d\t",sq);
    }
}
