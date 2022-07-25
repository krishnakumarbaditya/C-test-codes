#include<stdio.h>
int main(){
    // 1.Write a program to print MySirG 5 times on the screen.
    int i=1;
    while(i<=5)
    {
        printf("MySirg\n"); 
        i++;
    }
    printf("\n");
    // 2.Write a program to print the first 10 natural numbers.
    int no=1;
    printf("First 10 natuaral number. \n");
    while(no<=10)
    {
        printf("%d\n",no);
        no++;
    }
    printf("\n");
    // 3.Write a program to print the first 10 natural numbers in reverse order.
    int no1=10;
    printf("First 10 natural numbers in reverse order.\n");
    while(no1>=1){
        printf("%d\n",no1);
        no1--;
    }
    printf("\n");
    // 4.Write a program to print the first 10 odd natural numbers
    int no2=1;
    printf("First 10 odd natural numbers.\n");
    while(no2<=20){
        if(no2%2!=0)
            printf("%d\n",no2);
        no2++;
    }
    printf("\n");
    //5.Write a program to print the first 10 odd natural numbers in reverse order.
    int no3=20;
    printf("First 10 odd natural numbers in reverse order.\n");
    while(no3>=1){
        if(no3%2!=0)
            printf("%d\n",no3);
        no3--;
    }
    printf("\n");
    // 6.Write a program to print the first 10 even natural numbers.
    int no4=1;
    printf("First 10 even natural numbers.\n");
    while(no4<=20){
        if(no4%2==0)
            printf("%d\n",no4);
        no4++;
    }
    printf("\n");
    // 7.Write a program to print the first 10 even natural numbers in reverse order.
    int no5=20;
    printf("First 10 even natural numbers in reverse order.\n");
    while(no5>=1){
        if(no5%2==0)
            printf("%d\n",no5);
        no5--;
    }
    printf("\n");
    // 8.Write a program to print squares of the first 10 natural numbers.
    int no6,sq;
    printf("Square of first 10 natural numbers.\n");
    for(no6=1;no6<=10;no6++){
        sq=no6*no6;
        printf("%d * % d = %d\n",no6,no6,sq);
    }
    printf("\n");
    // 9.Write a program to print cubes of the first 10 natural numbers.
    int no7,cu;
    printf("Cube of first 10 natural numbers.\n");
    for(no7=1;no7<=10;no7++){
        cu=no7*no7*no7;
        printf("%d * %d * %d = %d\n",no7,no7,no7,cu);
    }
    printf("\n");
    // 10.Write a program to print a table of 5.
    int no8,tb,no9=5;
    printf("Print a table of 5\n");
    for(no8=1;no8<=10;no8++){
        tb=no9*no8;
        printf("%d * %d = %d\n",no9,no8,tb);
    }
    return 0;
}
