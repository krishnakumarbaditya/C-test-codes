//1. Write a recursive function to print first N natural numbers

#include<stdio.h>
void natural(int);
int main()
{
    int no;
    printf("print first N natural numbers.");
    scanf("%d",&no);
    natural(no);
}
void natural(int no1)
{
    if(no1>0)
    {
        natural(no1-1);
        printf("%d\t",no1);
    }

}
