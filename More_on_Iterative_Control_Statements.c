#include<stdio.h>
int main(){
    // 1.Write a program to print MySirG N times on the screen.
    int i=1,n;
    printf("Enter a no ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("MySirg\n"); 
        i++;
    }
    printf("\n");
    // 2.Write a program to print the first N natural numbers.
    int no=1,n1;
    printf("First N natuaral number. \n");
    printf("Enter a no ");
    scanf("%d",&n1);
    while(no<=n1)
    {
        printf("%d\n",no);
        no++;
    }
    printf("\n");
    // 3.Write a program to print the first N natural numbers in reverse order.
    int no1;
    printf("First N natural numbers in reverse order.\n");
    printf("Enter a no ");
    scanf("%d",&no1);
    while(no1>=1){
        printf("%d\n",no1);
        no1--;
    }
    printf("\n");
    // 4.Write a program to print the first N odd natural numbers
    int no2=1,n2,i7;
    printf("First N odd natural numbers.\n");
    printf("Enter a no ");
    scanf("%d",&n2);
    for(i7=1;i7<=n2;i7++){        
        printf("%d\n",no2);
        no2=no2+2;
    }
    printf("\n");
    // 5.Write a program to print the first N odd natural numbers in reverse order.
    int no3,n3,i1;
    printf("First N odd natural numbers in reverse order.\n");
    printf("Enter a no ");
    scanf("%d",&no3);
    n3=no3*2-1;
    for(i1=no3;i1>=1;i1--){        
        printf("%d\n",n3);
        n3=n3-2;       
    }   
    printf("\n");
    // 6.Write a program to print the first N even natural numbers.
    int no4=2,i2,n4;
    printf("First N even natural numbers.\n");
    printf("Enter a no ");
    scanf("%d",&n4);
    for(i2=1;i2<=n4;i2++){        
        printf("%d\n",no4);
        no4=no4+2;
    }
    printf("\n");
    // 7.Write a program to print the first N even natural numbers in reverse order.
    int no5,n5,i3;
    printf("First N even natural numbers in reverse order.\n");
    printf("Enter a no ");
    scanf("%d",&n5);
    no5=n5*2;
    for(i3=n5;i3>=1;i3--){
        printf("%d\n",no5);
        no5=no5-2;
    }    
    printf("\n");
    // 8.Write a program to print squares of the first N natural numbers.
    int no6,sq,n10;
    printf("Square of first N natural numbers.\n");
    printf("Enter a no ");
    scanf("%d",&n10);
    for(no6=1;no6<=n10;no6++){
        sq=no6*no6;
        printf("%d * % d = %d\n",no6,no6,sq);
    }
    printf("\n");
    // 9.Write a program to print cubes of the first N natural numbers.
    int no7,cu,n11;
    printf("Cube of first N natural numbers.\n");
    printf("Enter a no ");
    scanf("%d",&n11);
    for(no7=1;no7<=n11;no7++){
        cu=no7*no7*no7;
        printf("%d * %d * %d = %d\n",no7,no7,no7,cu);
    }
    printf("\n");
    // 10.Write a program to print a table of N.
    int no8,tb,no9;
    printf("Print a table of N\n");
    printf("Enter a no ");
    scanf("%d",&no9);
    for(no8=1;no8<=10;no8++){
        tb=no9*no8;
        printf("%d * %d = %d\n",no9,no8,tb);
    }
    return 0;
}