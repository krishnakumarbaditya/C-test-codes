//1. Define a structure Employee with member variables id, name, salary
#include<stdio.h>
int main()
{
    struct Employee
    {
        int id
        char name[20];
        double salary;
    };
}

//2. Write a function to take input employee data from the user. [ Refer structure from question 1 ]
#include<stdio.h>
#include<string.h>
struct Employee
{
    int eid;
    char ename[20];
    double esalary;
};
struct Employee input();
int main()
{
    input();
}
struct Employee input()
{
  struct Employee E;
  printf("Enter the id name and salary\n");
  scanf("%d",&E.eid);
  fflush(stdin);
  fgets(E.ename,20,stdin);
  E.ename[strlen(E.ename)-1]='\0';
  scanf("%d",&E.esalary);
}

//3. Write a function to display employee data. [ Refer structure from question 1 ]
#include<stdio.h>
#include<string.h>
struct Employee
{
    int eid;
    char ename[20];
    float esalary;
};
struct Employee input();
void display(struct Employee b1);
int main()
{
    struct Employee b;
    b=input();
    display(b);
}
void display(struct Employee b1)
{
    printf("%d %s %.2f",b1.eid,b1.ename,b1.esalary);
}
struct Employee input()
{
  struct Employee E;
  printf("Enter the id name and salary\n");
  scanf("%d",&E.eid);
  fflush(stdin);
  fgets(E.ename,20,stdin);
  E.ename[strlen(E.ename)-1]='\0';
  scanf("%f",&E.esalary);
  return E;
}

/*
4. Write a function to find the highest salary employee from a given array of 10
employees. [ Refer structure from question 1]
*/
#include<stdio.h>
#include<string.h>
struct Employee
{
    int eid;
    char ename[20];
    float esalary;
};

int main()
{
    struct Employee b[10];
    for(int i=0;i<10;i++)
    {
        printf("Enter eid,ename and esalary\n");
        scanf("%d",&b[i].eid);
        fflush(stdin);
        fgets(b[i].ename,20,stdin);
        b[i].ename[strlen(b[i].ename)-1]='\0';
        scanf("%f",&b[i].esalary);
    }
    for(int i=0;i<10;i++)
    {
        printf("%d %s %.2f\n",b[i].eid,b[i].ename,b[i].esalary);
    }
    int max=0;
    for(int i=0;i<10;i++)
    {
        if(max<b[i].esalary)
        {
            max=b[i].esalary;
        }
    }
    printf("Highest Salary is %d.",max);
}

/*
5. Write a function to sort employees according to their salaries [ refer structure from
question 1]
*/

#include <stdio.h>
#include <string.h>
struct employ
{
    char id[20];
    char name[20];
    float salary;
};
struct employ input()
{
    struct employ e1;
    fflush(stdin);
    printf("enter id = ");
    fgets(e1.id, 20, stdin);
    e1.id[strlen(e1.id) - 1] = '\0';
    fflush(stdin);
    printf("enter name = ");
    fgets(e1.name, 20, stdin);
    e1.name[strlen(e1.name) - 1] = '\0';
    printf("enter salary = ");
    scanf("%f", &e1.salary);
    return e1;
}
void SortByName(struct employ e[], int x)
{
    int i, j;
    struct employ temp;
    for (i = 1; i < x; i++)
    {
        for (j = 0; j < x - i; j++)
        {
            if (e[j].salary > e[j + 1].salary)
            {
                temp = e[j];
                e[j] = e[j + 1];
                e[j + 1] = temp;
            }
        }
    }
}
void display(struct employ e)
{
    printf("ID = %s  NAME = %s  SALARY = %f\n", e.id, e.name, e.salary);
}
int main()
{
    struct employ e[3];
    int i;
    for (i = 0; i < 3; i++)
        e[i] = input();
    printf("After Sorting By Salary :- \n");
    SortByName(e, 3);
    for (i = 0; i < 3; i++)
        display(e[i]);
}

/*
6. Write a function to sort employees according to their names [refer structure from
question 1]
*/

#include <stdio.h>
#include <string.h>
struct employ
{
    char id[20];
    char name[20];
    float salary;
};
struct employ input()
{
    struct employ e1;
    fflush(stdin);
    printf("enter id = ");
    fgets(e1.id, 20, stdin);
    e1.id[strlen(e1.id) - 1] = '\0';
    fflush(stdin);
    printf("enter name = ");
    fgets(e1.name, 20, stdin);
    e1.name[strlen(e1.name) - 1] = '\0';
    printf("enter salary = ");
    scanf("%f", &e1.salary);
    return e1;
}
void SortByName(struct employ e[], int x)
{
    int i, j;
    struct employ temp;
    for (i = 1; i < x; i++)
    {
        for (j = 0; j < x - i; j++)
        {
            if (strcmp(e[j].name, e[j + 1].name) > 0)
            {
                temp = e[j];
                e[j] = e[j + 1];
                e[j + 1] = temp;
            }
        }
    }
}
void display(struct employ e)
{
    printf("ID = %s  NAME = %s  SALARY = %f\n", e.id, e.name, e.salary);
}
int main()
{
    struct employ e[3];
    int i;
    for (i = 0; i < 3; i++)
        e[i] = input();
    printf("After Sorting By Nane :- \n");
    SortByName(e, 3);
    for (i = 0; i < 3; i++)
        display(e[i]);
}

//7. Write a program to calculate the difference between two time periods.
#include <stdio.h>
struct time
{
    int hrs, min, sec;
};
void different(struct time start, struct time stop, struct time *diff)
{
    while (stop.sec > start.sec)
    {
        --start.min;
        start.sec += 60;
    }
    diff->sec = start.sec - stop.sec;
    while (stop.min > start.min)
    {
        --start.hrs;
        start.min += 60;
    }
    diff->min = start.min - stop.min;
    diff->hrs = start.hrs - stop.hrs;
}
int main()
{
    struct time x;
    struct time start, stop, diff;
    printf("enter start time\n");
    scanf("%d%d%d", &start.hrs, &start.min, &start.sec);
    printf("enter end time\n");
    scanf("%d%d%d", &stop.hrs, &stop.min, &stop.sec);
    different(start, stop, &diff);
    printf("Time Diff :- %d:%d:%d - ", start.hrs, start.min, start.sec);
    printf("%d:%d:%d ~~> ", stop.hrs, stop.min, stop.sec);
    printf("%d:%d:%d", diff.hrs, diff.min, diff.sec);
}

//8. Write a program to store information of 10 students and display them using structure.
#include <stdio.h>
#include <string.h>
struct students
{
    char name[20];
    int class;
    int roll_no;
    char section;
    float marks;
};
int main()
{
    int i;
    struct students s[10];
    for (i = 0; i < 10; i++)
    {
        printf("%d :- Enter Name , Class , Roll No , Section and Marks\n", i + 1);
        fflush(stdin);
        fgets(s[i].name, 20, stdin);
        s[i].name[strlen(s[i].name) - 1] = '\0';
        scanf("%d%d", &s[i].class, &s[i].roll_no);
        fflush(stdin);
        scanf("%c", &s[i].section);
        scanf("%f", &s[i].marks);
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d :- %s  %d  %d  %c  %f\n", i + 1, s[i].name, s[i].class, s[i].roll_no, s[i].section, s[i].marks);
    }
}

//9. Write a program to store information of n students and display them using structure
#include <stdio.h>
#include <string.h>
struct students
{
    char name[20];
    int class;
    int roll_no;
    char section;
    float marks;
};
int main()
{
    int i, x;
    printf("enter the number of students = ");
    scanf("%x", &x);
    struct students s[x];
    for (i = 0; i < x; i++)
    {
        printf("%d :- Enter Name , Class , Roll No , Section and Marks\n", i + 1);
        fflush(stdin);
        fgets(s[i].name, 20, stdin);
        s[i].name[strlen(s[i].name) - 1] = '\0';
        scanf("%d%d", &s[i].class, &s[i].roll_no);
        fflush(stdin);
        scanf("%c", &s[i].section);
        scanf("%f", &s[i].marks);
    }
    for (i = 0; i < x; i++)
    {
        printf("%d :- %s  %d  %d  %c  %f\n", i + 1, s[i].name, s[i].class, s[i].roll_no, s[i].section, s[i].marks);
    }
}
/*
10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student.
*/
#include <stdio.h>
#include <string.h>
struct Marks
{
    char name[20];
    int roll_no;
    float chem_marks, maths_marks, phy_marks;
};
void display(struct Marks s)
{
    printf("%s  %d  %f  %f  %f", s.name, s.roll_no, s.chem_marks, s.maths_marks, s.phy_marks);
}
int main()
{
    struct Marks s[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d :- Enter Name , Roll No , Chem Marks , Math Marks , Phy Marks\n", i + 1);
        fflush(stdin);
        fgets(s[i].name, 20, stdin);
        s[i].name[strlen(s[i].name) - 1] = '\0';
        scanf("%d%f%f%f", &s[i].roll_no, &s[i].chem_marks, &s[i].maths_marks, &s[i].phy_marks);
    }
    for (i = 0; i < 5; i++)
    {
        printf("Student No :- \n");
        float percentage = (s[i].chem_marks + s[i].maths_marks + s[i].phy_marks) / 3;
        if (s[i].chem_marks <= 100 && s[i].maths_marks <= 100 && s[i].phy_marks <= 100)
            printf("Percentage :- %f\n", percentage);
        else
            printf("error");
    }
}
