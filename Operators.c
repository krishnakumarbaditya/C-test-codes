#include<stdio.h>
int main(){
    //1.print unit digit of a given number
    int x=1023;
    printf("Given number is %d.\n",x);
    int y=x%10;
    printf("Unit digit of %d is %d.",x,y);
    printf("\n");

    //2.print a given number without its last digit.
    int z=46545;
    printf("Given number is %d.\n",z);
    int a=z/10;
    printf("Number %d without its last digit is %d.",z,a);
    printf("\n");

    //3.swap values of two int variables
    int d=4,e=5,f;
    printf("Number before swap d=%d and e=%d\n",d,e);
    f=d;
    d=e;
    e=f;
    printf("Number before swap d=%d and e=%d\n",d,e);

    //4.swap values of two int variables without using a third variable.
    int b=10,c=20;
    printf("Number before swap b=%d and c=%d",b,c);
    b=b+c;
    c=b-c;
    b=b-c;
    printf("\nNumber after swap b=%d and c=%d",b,c);
    printf("\n");

    //5.input a three-digit number and display the sum of the digits.
    int a1,rem,rem1,rem2,sum;
    printf("Input a three digit number ");
    scanf("%d",&a1);
    rem=a1%10;
    a1=a1/10;
    rem1=a1%10;
    a1=a1/10;
    rem2=a1%10;
    sum=rem+rem1+rem2;
    printf("Sum of three digit number is %d\n",sum);

    //6. takes a character as an input and displays its ASCII code.
    char c11;
    printf("Enter a character ");
    scanf("%c", &c11);
    printf("You entered %c\n", c11);
    printf("ASCII code is %d\n", c11);


    //8.Write a program to check whether the given number is even or odd using a bitwise operator.
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    if(num & 1)
    {
        printf("%d is Odd ",num);
    }
    else
    {
        printf("%d is Even ",num);
    }
    printf("\n");
    
    //9. print size of an int, a float, a char and a double type variable
    int k;
    char df;
    float fl;
    double dl;
    int size=sizeof(k);
    int size1=sizeof(df);
    int size2=sizeof(fl);
    int size3=sizeof(dl);
    printf("size of k=%d\n",size);
    printf("size of df=%d\n",size1);
    printf("size of fl=%d\n",size2);
    printf("size of dl=%d\n",size3);

    //10.Write a program to make the last digit of a number stored in a variable as zero. 
    int x1=2345;
    printf("Number is %d\n",x1);
    x1=x1/10;
    x1=x1*10;
    printf("Number stored in last digit of a variable as zero is  %d\n",x1);

    /*11.Write a program to input a number from the user and also input a digit. Append a 
         digit in the number and print the resulting number.*/
         int number,digit,result;
         printf("Enter number and digit ");
         scanf("%d %d",&number,&digit);
         result=number*10+digit;
         printf("Append a digit in the number and the resulting number is %d\n",result);
    /*12.Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and 
         convert it into USD.*/
    float Rs,INR=76.23,USD;
    printf("Enter Rupees ");
    scanf("%f",&Rs);
    USD=Rs/INR;
    printf("Rupees in USD is %f\n",USD);

    /*13.Write a program to take a three-digit number from the user and rotate its digits by 
      one position towards the right*/
      int num2,remn;
      printf("Enter a three-digit number ");
      scanf("%d",&num2);
      remn=num2%10;
      num2=num2/10;
      num2=remn*100+num2;
      printf("Rotate its digit by one position towards right is %d ",num2);

    return 0;
}