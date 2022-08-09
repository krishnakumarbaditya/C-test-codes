#include<stdio.h>
int main()
{
    //1. Write a program which takes the month number as an input and display number of days in that month.
    /*
    int a;
    printf("Enter Month Number ");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        printf("In Month January 31 days");
        break;
    case 2:
        printf("In Month February 28 days");
        break;
    case 3:
        printf("In Month March 31 days");
        break;
    case 4:
        printf("In Month April 30 days");
        break;
    case 5:
        printf("In Month May 31 days");
        break;
    case 6:
        printf("In Month June 30 days");
        break;
    case 7:
        printf("In Month July 31 days");
        break;
    case 8:
        printf("In Month August 31 days");
        break;
    case 9:
        printf("In Month September 30 days");
        break;
    case 10:
        printf("In Month October 31 days");
        break;
    case 11:
        printf("In Month November 30 days");
        break;
    default:
        printf("In Month December 31 days");
    }
    */
    /*
        2.Write a menu driven program with the following options:
        a. Addition
        b. Subtraction
        c. Multiplication
        d. Division
        e. Exit
    */
    /*
    int b,c,d;
    while(1)
    {
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Exit");
        printf("\n\nEnter the choice : ");
        scanf("%d",&d);
        switch(d)
        {
        case 1:
            printf("Enter Two Numbers ");
            scanf("%d %d",&b,&c);
            printf("Addition is %d",b+c);
            break;
        case 2:
            printf("Enter Two Numbers ");
            scanf("%d %d",&b,&c);
            printf("Subtraction is %d",b-c);
            break;
        case 3:
            printf("Enter Two Numbers ");
            scanf("%d %d",&b,&c);
            printf("Multiplication is %d",b*c);
            break;
        case 4:
            printf("Enter Two Numbers ");
            scanf("%d %d",&b,&c);
            printf("Division is %d",b/c);
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid Choice");
            }
    }
    */
    /*
        3. Write a program which takes the day number of a week and displays a
        unique greeting message for the day.
    */
    /*
    int week;
    printf("Enter a number of a week ");
    scanf("%d",&week);
    switch(week)
    {
    case 1:
        printf("Good morning, wake up. Start fresh and see the beautiful opportunity in each day.");
        break;
    case 2:
        printf("I hope you enjoyed your weekend.");
        break;
    case 3:
        printf("I hope you're doing well.");
        break;
    case 4:
        printf("I hope you're having a wonderful day.");
        break;
    case 5:
        printf("If Not Tired Keep Coding Else Drink Coffee.");
    case 6:
        printf("I'm eager to get your advice on a Road Trip from Kolkata to Nepal");
        break;
    default:
        printf("Take a Small Break Today");

    }
    */
    /*
        4. Write a menu driven program with the following options:
        a. Check whether a given set of three numbers are lengths of an
        isosceles triangle or not
        b. Check whether a given set of three numbers are lengths of sides of
        a right angled triangle or not
        c. Check whether a given set of three numbers are equilateral triangle
        or not
        d. Exit
    */

    /*int n1,n2,n3,n4;
    while(1)
    {
        printf("1.Check isosceles triangle.\n");
        printf("2.Check right angled triangle.\n");
        printf("3.Check equilateral triangle.\n");
        printf("4.Exit");
        printf("\n\n---Enter your choice---\n");
        scanf("%d",&n4);
        switch(n4)
        {
        case 1:
            printf("Enter three numbers ");
            scanf("%d %d %d",&n1,&n2,&n3);
            if(n1==n2 || n2==n3 || n3==n1)
                printf("Triangle is isosceles triangle.\n");
            else
                printf("Triangle is not an isosceles triangle.\n");
            break;
        case 2:
            printf("Enter three numbers ");
            scanf("%d %d %d",&n1,&n2,&n3);
            if((n1*n1)+(n2*n2)==(n3*n3) || (n2*n2)+(n3*n3)==(n1*n1) || (n3*n3)+(n1*n1)==(n2*n2))
                printf("Triangle is right angled triangle.\n");
            else
                printf("Triangle is not a right angled triangle.\n");
            break;
        case 3:
            printf("Enter three numbers ");
            scanf("%d %d %d",&n1,&n2,&n3);
            if(n1==n2 && n2==n3)
                printf("Triangle is equilateral triangle.\n");
            else
                printf("Triangle is not a equilateral triangle.\n");
            break;
        case 4:
            exit(0);
        }

    }
    */

    /*
    5. Convert the following if-else-if construct into switch case:
        if(var == 1)
        System.out.println("good");
        else if(var == 2)
        System.out.println("better");
        else if(var == 3)
        System.out.println("best");
        else
        System.out.println("invalid");
    */
    /*
    int var;
    printf("Enter variable ");
    scanf("%d",&var);
    switch(var)
    {
    case 1:
        printf("good");
        break;
    case 2:
        printf("better");
        break;
    case 3:
        printf("best");
        break;
    default:
        printf("Invalid Choice.");
    }
    */

    //6. Program to check whether a year is a leap year or not. Using switch statement
    /*
    int year,r;
    printf("Enter the year ");
    scanf("%d",&year);
    r = (year%400==0 && year%100==0 && year%4==0 );
    switch(r)
    {
    case 1:
        printf("%d is Leap Year",year);
        break;
    case 0:
        printf("%d is not a Leap Year",year);
        break;
    default:
        printf("%d is not a Leap Year",year);
    }
    */


    /*7. Program to take the value from the user as input electricity unit charges
        and calculate total electricity bill according to the given condition . Using
        the switch statement.
        For the first 50 units Rs. 0.50/unit
        For the next 100 units Rs. 0.75/unit
        For the next 100 units Rs. 1.20/unit
        For units above 250 Rs. 1.50/unit
        An additional surcharge of 20% is added to the bill.
    */
    printf("---Electricity Bill---\n");
    printf("1. First 50 units consumed.\n");
    printf("2. Next 100 units consumed.\n");
    printf("3. Next 100 units consumed.\n");
    printf("4. Next 250 units consumed.\n");
    printf("Enter the choice ");
    int unit,num2,bill,tb;
    scanf("%d",&num2);
    switch(num2)
    {
    case 1:
        printf("Enter the unit consumed ");
        scanf("%d",&unit);
        bill=(unit*0.5);
        tb=bill+(bill*0.2);
        printf("Total Bill is %d.",tb);
        break;
    case 2:
        printf("Enter the unit consumed ");
        scanf("%d",&unit);
        bill=(unit*0.5)+(unit-100)*0.75;
        tb=bill+(bill*0.2);
        printf("Total Bill is %d.",tb);
        break;
    case 3:
        printf("Enter the unit consumed ");
        scanf("%d",&unit);
        bill=(unit*0.5)+(unit*0.75)+(unit-100)*1.20;
        tb=bill+(bill*0.2);
        printf("Total Bill is %d.",tb);
        break;
    case 4:
        printf("Enter the unit consumed ");
        scanf("%d",&unit);
        bill=(unit*0.5)+(unit*0.75)+(unit*1.20)+(unit-250)*1.50;
        tb=bill+(bill*0.2);
        printf("Total Bill is %d.",tb);
        break;
    default:
        printf("Invalid Choice");
    }

    /*
    8.Program to convert a positive number into a negative number and negative
    number into a positive number using a switch statement.
    */
    /*
    printf("1.positive number into a negative number.\n");
    printf("2.negative number into a positive number.\n");
    int num1,neg,num2,pos;
    int n;
    printf("Enter your choice ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        num1,neg;
        printf("Enter a Positive number ");
        scanf("%d",&num1);
        neg = num1*(-1);
        printf("Negative form of number is %d.",neg);
        break;
    case 2:
        num2,pos;
        printf("Enter a Negative number ");
        scanf("%d",&num1);
        pos = num1*(-1);
        printf("Positive form of number is %d.",pos);
        break;
    default:
        printf("Invalid Choice.");
    }
    */



    return 0;
}

