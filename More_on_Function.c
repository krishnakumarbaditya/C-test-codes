//1.Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int LCM();
int main()
{
    int no,no1,lcm;
    printf("Enter two numbers ");
    scanf("%d %d",&no,&no1);
    lcm=LCM(no,no1);
    printf("LCM of %d and %d number is %d",no,no1,lcm);
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
