#include<stdio.h>
float area(float);
int main()
{
    //1. Write a function to calculate the area of a circle. (TSRS)
    float r;
    printf("Enter the radius of the circle ");
    scanf("%f",&r);
    printf("Area of a circle is %f",area(r));
}
float area(float r)
{
    float area;
    area=3.14*r*r;
    return area;
}
