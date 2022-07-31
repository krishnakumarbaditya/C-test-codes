#include<stdio.h>
int main(){
    //1. Write a program to calculate sum of first N natural numbers
    int no,i,sum=0;
    printf("Enter a no ");
    scanf("%d",&no);
    for(i=1;i<=no;i++)
    {
        sum=sum+i;
    }
    printf("sum of first N natural numbers %d",sum);
    printf("\n");

    //2. Write a program to calculate sum of first N even natural numbers
    int no1,i1,sum1=0;
    printf("Enter a number ");
    scanf("%d",&no1);
    for(i1=1;i1<=no1;i1++)
    {
        sum1=sum1+i1*2;
    }
    printf("sum of first N even natural numbers %d",sum1);
    printf("\n");

    //3. Write a program to calculate sum of first N odd natural numbers
    int no2,i2,sum2=0;
    printf("Enter a number ");
    scanf("%d",&no2);
    for(i2=1;i2<=no2;i2++)
    {
        sum2=sum2+(i2*2-1);
    }
    printf("sum of first N odd natural numbers is %d",sum2);
    printf("\n");

    //4. Write a program to calculate sum of squares of first N natural numbers
    int no3,i3,sum3=0;
    printf("Enter a no ");
    scanf("%d",&no3);
    for(i3=1;i3<=no3;i3++)
    {
        sum3=sum3+i3*i3;
    }
    printf("sum of squares of first N natural numbers is %d",sum3);
    printf("\n");

    //5. Write a program to calculate sum of cubes of first N natural numbers
    int no4,i4,sum4=0;
    printf("Enter a no ");
    scanf("%d",&no4);
    for(i4=1;i4<=no4;i4++)
    {
        sum4=sum4+(i4*i4*i4);
    }
    printf("sum of cubes of first N natural numbers is %d",sum4);
    printf("\n");

    //6. Write a program to calculate factorial of a number
    int no5,i5,no6=1;
    printf("enter a number ");
    scanf("%d",&no5);
    for(i5=1;i5<=no5;i5++)
    {
        no6 = no6*i5;
    }
    printf("Factorial of %d is %d",no5,no6);
    printf("\n");

    //7. Write a program to count digits in a given number
    int no8,no7,r1,count=0;
    printf("Enter a number ");
    scanf("%d",&no7);
    no8= no7;
    while(no8){
        r1=no8%10;
        count++;
        no8=no8/10;
    }
    printf("digits of %d given number is %d",no7,count);
    printf("\n");
    // 8. Write a program to check whether a given number is a Prime number or not
    int no9,no10,i6;
    printf("Enter a no ");
    scanf("%d",&no9);
    no10=no9;
    for(i6=2;i6<=no10-1;i6++)
    {
        if(no10%i6==0)
            break;
    }
    if(i6==no9)
        printf("%d is prime number",no9);
    else
        printf("%d is not a prime number",no9);
    printf("\n");
    // 9. Write a program to calculate LCM of two numbers
    int no11,no12,max;
    printf("Enter two numbers ");
    scanf("%d %d",&no11,&no12);
    max=no11>no12?no11:no12;
    while(1)
    {
        if(max%no11==0 && max%no12==0)
        {
            printf("LCM of %d and %d is %d",no11,no12,max);
            break;
        }
        ++max;
    }
    printf("\n");
    // 10. Write a program to reverse a given number
    int no13,i,rem,rev=0;
    printf("Enter a no ");
    scanf("%d",&no13);
    while(no13)
    {
        rem=no13%10;
        rev=(rev*10)+rem;
        no13=no13/10;
    }
    printf("Reverse number is %d",rev);
    printf("\n");

    return 0;
}