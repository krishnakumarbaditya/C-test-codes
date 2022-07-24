#include<stdio.h>
int main(){
    //1.Write a program to check whether a given number is positive or non-positive.
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    if(a>0)
        printf("%d is positive.",a);
    else
        printf("%d is non-positive.",a);
    printf("\n");

    //2.Write a program to check whether a given number is divisible by 5 or not.
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    if (num%5==0)
        printf("%d is divisible by 5.",num);
    else
        printf("%d is not-divisible by 5.",num);
    printf("\n");

    //3.Write a program to check whether a given number is an even number or an odd number.
    int num1;
    printf("Enter a number ");
    scanf("%d",&num1);
    if(num1%2==0)
        printf("%d is even number",num1);
    else
        printf("%d is odd number",num1);
    printf("\n");

    //4.Write a program to check whether a given number is an even number or an odd number without using % operator.
    int num2,result;
    printf("Enter a number ");
    scanf("%d",&num2);
    result=num2 & 1;
    if(result==1)
        printf("%d is odd",num2);
    else
        printf("%d is even",num2);
    printf("\n");

    //5.Write a program to check whether a given number is a three-digit number or not.
    int num3,count=0;
    printf("Enter a number ");
    scanf("%d",&num3);
    int n=num3;
    if(n%10!=0)
        count++;
    n=n/10;
    if(n%10!=0)
        count++;
    n=n/10;
    if(n%10!=0)
        count++;
    n=n/10;
    if(n%10!=0)
        count++;
    n=n/10;
    if(count==3)
        printf("Given %d is three digit number",num3);
    else
        printf("%d is not a three digit number",num3);
    printf("\n");

    //6.Write a program to print greater between two numbers. Print one number of both are the same.
    int n1,n2;
    printf("Enter two numbers ");
    scanf("%d %d",&n1,&n2);
    if(n1>n2)
        printf("%d is greater.",n1);
    else if(n2>n1)
        printf("%d is greater.",n2);
    else
        printf("both are same number");
    printf("\n");

    //7.Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots


    //8.Write a program to check whether a given year is a leap year or not.
    int year;
    printf("Enter the year ");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
            printf("%d is leap year",year);
        else
            printf("%d is not a leap year",year);
    }
    else if(year%4==0)
        printf("%d is a leap year",year);
    else
        printf("%d is not a leap year",year);
    printf("\n");

    //9.Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
    int no1,no2,no3;
    printf("Enter the number one ");
    scanf("%d",&no1);
    printf("Enter the number two ");
    scanf("%d",&no2);
    printf("Enter the number three ");
    scanf("%d",&no3);
    if(no1>no2 && no1>no3)
        printf("%d is greater",no1);
    else if(no2>no1 && no2>no3)
        printf("%d is greater",no2);
    else
        printf("%d is greater",no3);
    printf("\n");
    
    /*10.Write a program which takes the cost price and selling price of a product from the user. 
    Now calculate and print profit or loss percentage.*/
    
    float CP,SP,profit,loss;
    float pp,lp;
    printf("Selling Price : ");
    scanf("%d",&SP);
    printf("cost Price : ");
    scanf("%d",&CP);
    profit=SP-CP;
    loss=CP-SP;
    pp=(profit/CP)*100;
    lp=(loss/CP)*100;
    if(SP>CP)
        printf("profit%% is %f\n ",pp);
    else
        printf("loss%% is %f ",lp);
    printf("\n");
    

    /*11.Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33.
     Now display whether the candidate passed the examination or failed.*/
    
    float Hindi,English,Maths,Life_Science,Physics,Marks;
    printf("Enter the marks of five subjects : \n");
    printf("Hindi : ");
    scanf("%f",&Hindi);
    printf("English : ");
    scanf("%f",&English);
    printf("Maths : ");
    scanf("%f",&Maths);
    printf("Life_Science : ");
    scanf("%f",&Life_Science);
    printf("Physics : ");
    scanf("%f",&Physics);
    Marks=(Hindi+English+Maths+Life_Science+Physics)/5;
    printf("Total marks=%.2f\n",Marks);
    if(Marks>=33)
        printf("Student is Pass");
    else
        printf("Student is Fail");
    printf("\n");
    

    //12.Write a program to check whether a given alphabet is in uppercase or lowercase.
    
    char alpha;
    printf("Enter a alphabet : ");
    scanf("%c",&alpha);
    if(alpha>='A' && alpha<='Z')
        printf("Alphabet %c is in uppercase",alpha);
    else if(alpha>='a' && alpha<='z')
        printf("Alphabet %c is in lowercase",alpha);
    else
        printf("%c is neither uppercase or lowercase");
    printf("\n");
    

    //13.Write a program to check whether a given number is divisible by 3 and divisible by 2.
    
    int number1;
    printf("Enter a number ");
    scanf("%d",&number1);
    if(number1%3==0 && number1%2==0)
        printf("%d is divisible by 2 and 3",number1);
    else
        printf("%d is neither divisible by 2 and 3",number1);
    printf("\n");
    
    //14.Write a program to check whether a given number is divisible by 7 or divisible by 3.
    
    int number2;
    printf("Enter a number ");
    scanf("%d",&number2);
    if(number2%7==0)
        printf("%d is divisible by 7",number2);
    else if(number2%3==0)
        printf("%d is divisible by 3",number2);
    else
        printf("%d is neither divisible by 7 and 3",number2);
    printf("\n");
    

    //15.Write a program to check whether a given number is positive, negative or zero.
    
    int number3;
    printf("Enter a number ");
    scanf("%d",&number3);
    if(number3>0)
        printf("%d is positive",number3);
    else if(number3<0)
        printf("%d is negative",number3);
    else
        printf("%d is zero",number3);
    printf("\n");
    

    /*16.Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case),
     a digit or a special character.*/
    
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
        printf("%c is a uppercase",ch);
    else if(ch>=97 && ch<=122)
        printf("%c is a lowercase",ch);
    else if(ch>=48 && ch<=57)
        printf("%c is a digit",ch);
    else
        printf("%c is a special character",ch);
    printf("\n");
    

    //17.Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not. 
    
    float s1,s2,s3;
    printf("Enter the trianlgle side \n");
    printf("First side of triangle : ");
    scanf("%f",&s1);
    printf("Second side of triangle : ");
    scanf("%f",&s2);
    printf("Third side of triangle : ");
    scanf("%f",&s3);
    if(s1+s2>s3 && s2+s3>s1 && s3+s1>s2)
        printf("Triangle is valid");
    else
        printf("Triangle is not valid");
    printf("\n");
    

    //18.Write a program which takes the month number as an input and display number of days in that month
    int mn;
    printf("Enter month number ");
    scanf("%d",&mn);
    if(mn==1)
        printf("Month Number %d is 31 days",mn);
    else if(mn==2)
        printf("Month Number %d is 28 days",mn);
    else if(mn==3)
        printf("Month Number %d is 31 days",mn);
    else if(mn==4)
        printf("Month Number %d is 30 days",mn);
    else if(mn==5)
        printf("Month Number %d is 31 days",mn);
    else if(mn==6)
        printf("Month Number %d is 30 days",mn);
    else if(mn==7)
        printf("Month Number %d is 31 days",mn);
    else if(mn==8)
        printf("Month Number %d is 31 days",mn);
    else if(mn==9)
        printf("Month Number %d is 30 days",mn);
    else if(mn==10)
        printf("Month Number %d is 31 days",mn);
    else if(mn==11)
        printf("Month Number %d is 30 days",mn);
    else
        printf("Month Number %d is 31 days",mn);
   return 0;
}
