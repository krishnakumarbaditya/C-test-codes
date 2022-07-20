#include<stdio.h>
int main(){
    //1.print Hello Students on the screen.
    printf("Hello Students\n");

    //2.print Hello in the first line and Students in the second line.
    printf("Hello\n");
    printf("Students\n");  

    //3.print “MySirG” on the screen.
    printf("\"MySirg\"");
    printf("\n");    

    //4.Find the area of circle.
    int area,radius;
    printf("Radius of the circle ");
    scanf("%d",&radius);
    area=3.14*radius*radius;
    printf("Area of circle is %d having the radius %d",area,radius);
    printf("\n");
    


    //5.calculate the length of String using printf function
    int c =printf("Krishna");
    printf("%d",c);
    printf("\n");

    //6.print the name of the user in double quotes.
    printf("\"Hello , Amit Kumar\"");
    printf("\n");

    //7.print “%d” on the screen
    printf("%%d");
    printf("\n");

    //8.print “\n” on the screen
    printf("\\n");
    printf("\n");

    //9.print “\\” on the screen
    printf("\\\\");
    printf("\n");

    /*10.WAP to take date as an input in below given format and convert the date format and 
display the result as given below.*/
    int DD,MM,YYYY;
    printf("Enter a date ");
    scanf("%d/%d/%d",&DD,&MM,&YYYY);
    printf("Day-%d ,Month-%d ,Year-%d",DD,MM,YYYY);
    printf("\n");

    /*11.WAP to take time as an input in below given format and convert the time format and 
display the result as given below.*/
    int HH,MM1;
    printf("Enter a time ");
    scanf("%d:%d",&HH,&MM1);
    printf("%d Hour and %d Minute",HH,MM1);
    printf("\n");

    //12 Find the output Below    
    int x = printf("ineuron");
    printf("%d",x);
    return 0;
    
}