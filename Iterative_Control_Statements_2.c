#include<stdio.h>
#include<math.h>
int main()
{
    // 1. Write a program to find the Nth term of the Fibonnaci series.
    int a=-1,b=1,c,i,no;
    printf("Enter the no ");
    scanf("%d",&no);
    for(i=1;i<=no;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d",c);
    printf("\n");

    // 2. Write a program to print first N terms of Fibonacci series.
    int a1=-1,b1=1,c1,i1,no1;
    printf("Enter the no ");
    scanf("%d",&no1);
    for(i1=1;i1<=no1;i1++)
    {
        c1=a1+b1;
        a1=b1;
        b1=c1;
        printf("%d\t",c1);
    }
    printf("\n");
    
    // 3. Write a program to check whether a given number is there in the Fibonacci series or not.
    int a5,b5,a6,b6,n5;
    printf("Enter a number ");
    scanf("%d",&n5);
    a5=(5*pow(n5,2)+4);
    b5=(5*pow(n5,2)-4);
    a6=(int)sqrt(a5);
    b6=(int)sqrt(b5);
    if(a6*a6==a5 || b6*b6==b5)
        printf("%d is in Fibonacci series",n5);
    else
        printf("%d is in not in Fibonacci series",n5);
    printf("\n");

    // 4. Write a program to calculate HCF of two numbers
    int a2,b2,i2=1;
    int  hc;
    printf("Enter two numbers ");
    scanf("%d %d",&a2,&b2);
    for(hc=a2<b2?a2:b2;hc>=1;hc--)
    {
        
        if(a2%hc==0 && b2%hc==0)
        {
            break;
            
        }        
    }
    printf("HCF is %d",hc);
    printf("\n");
    
    // 5. Write a program to check whether two given numbers are co-prime numbers or not
    int k,k1,k2,min;
    printf("Enter two numbers ");
    scanf("%d %d",&k,&k1);
    min=k<k1?k:k1;
    for(k2=2;k2<=min;k2++)
    {
        if(k%k2==0 && k1%k2==0)
            break;
    }
    if(k2==min+1)
        printf("%d and %d are co-prime numbers",k,k1);
    else
        printf("%d and %d are not co-prime numbers",k,k1);
    printf("\n");

    // 6.Write a program to print all Prime numbers under 100
    int no9,i6,count;
    for(no9=1;no9<=100;no9++)
    {
        count=0;
        for(i6=2;i6<=no9/2;i6++)
        {
            if(no9%i6==0)
            { 
                count++;
                break;
            }
        }
        if(count==0 && no9!=1)
            printf("%d\n",no9);        
    } 
    
    // 7. Write a program to print all Prime numbers between two given numbers
    int l,u,g,h;
    printf("Enter two numbers ");
    scanf("%d %d",&l,&u);
    for(g=l+1;g<=u-1;g++)
    {
        for(h=2;h<g;h++)
            if(g%h==0)
                break;
        if(g==h)
            printf("%d\n",g);
    }
    printf("\n");

    // 8. Write a program to find next Prime number of a given number
    int j,j1,j2;
    printf("Enter a number ");
    scanf("%d",&j);
    for(j1=j+1;j1>=j;j1++)
    {
        for(j2=2;j2<j1;j2++)
            if(j1%j2==0)
                break;
        if(j1==j2)
            break;
    }
    printf("%d is the next prime number of %d",j1,j);
    printf("\n");

    // 9. Write a program to check whether a given number is an Armstrong number or not
    int n2,n3,rem1,sum1=0;
    printf("Enter a number ");
    scanf("%d",&n3);
    n2 = n3;
    while(n2){
    rem1 = n2%10;
    sum1 = sum1+pow(rem1,3);
    n2 = n2/10;
    }
    if(sum1==n3)
        printf("%d is a Armstrong number.",n3);
    else
        printf("%d is not a Armstrong number.",n3);
    printf("\n");

    // 10. Write a program to print all Armstrong numbers under 1000
    int n5,i9=1,rem2,sum2;
    while(i9<=1000)
    {
        sum2=0;
        n5 = i9;
        while(n5){
        rem2 = n5%10;
        sum2 = sum2+pow(rem2,3);
        n5 = n5/10;
        }
        if(sum2==i9)
            printf("%d is a Armstrong number.\n",i9);
        i9++;
    }
    printf("\n");
    return 0;
}
