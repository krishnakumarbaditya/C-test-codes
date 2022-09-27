//1. Define a function to input variable length string and store it in an array without memory wastage.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *str,c;
    str = (char*)malloc(sizeof(char));
    printf("Enter a string : ");
    int i=0,j=1;

    while(c !='\n')
    {
        c = getc(stdin);
        j++;
        str = (char*)realloc(str,j*sizeof(char));
        str[i]=c;
        i++;
    }
    str[i]='\0';
    printf("\nString is %s",str);
    free(str);
}
/*
2. Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,c;

    int i=0, size=0,sum=0;
    printf("Enter the size : ");
    scanf("%d",&size);

    ptr = (int*)calloc(size,sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory Allocation is failed");
        return 0;
    }
    printf("The entered %d values \n",size);

    for(i=0;i<size;i++)
    {
        scanf("%d", ptr+i);
    }
    for(i=0;i<size;i++)
    {
        sum=sum+ *(ptr+i);
    }
    printf("Average is %d",sum/size);

    free(ptr);
}
/*
3. Write a program to calculate the sum of n numbers entered by the user using malloc and free.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,c;

    int i=0, size=0,sum=0,j=0;
    printf("Enter the size : ");
    scanf("%d",&size);

    ptr = (int*)malloc(sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory Allocation is failed");
        return 0;
    }
    printf("The entered %d values \n",size);

    for(i=0;i<size;i++)
    {
        scanf("%d",&c);
        j++;
        ptr = (int*)realloc(ptr,j*sizeof(int));
        ptr[i]=c;
    }
    for(i=0;i<size;i++)
    {
        sum=sum+ *(ptr+i);
    }
    printf("Sum is %d",sum);

    free(ptr);
}
/*
4. Write a program to input and print text using dynamic memory allocation.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *str,c;

    str = (char*)malloc(sizeof(char));

    if(str ==NULL)
    {
        printf("Memory Allocation is failed");
        return 0;
    }
    printf("Enter a string : ");
    int i=0,j=1;
    while(c!='\n')
    {
        c=getc(stdin);
        j++;
        str = (char*)realloc(str,j*sizeof(char));
        str[i]=c;
        i++;
    }
    str[i]='\0';
    printf("Entered string is %s",str);

    free(str);
}

/*
5. Write a program to read a one dimensional array, print sum of all elements along with
inputted array elements using dynamic memory allocation.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,c;

    int i=0, size=0,sum=0,j=0;
    printf("Enter the size : ");
    scanf("%d",&size);

    ptr = (int*)malloc(sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory Allocation is failed");
        return 0;
    }
    printf("The entered %d values \n",size);

    for(i=0;i<size;i++)
    {
        printf("Enter element %3d: ",i+1);
        scanf("%d",&c);
        j++;

        ptr = (int*)realloc(ptr,j*sizeof(int));
        ptr[i]=c;
    }
    for(i=0;i<size;i++)
    {
        sum=sum+ *(ptr+i);
    }
    printf("\nSum is %d",sum);

    free(ptr);
}
/*
6. Write a program in C to find the largest element using Dynamic Memory Allocation.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,c;

    int i=0, size=0,j=0;
    printf("Enter the size : ");
    scanf("%d",&size);

    ptr = (int*)malloc(sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory Allocation is failed");
        return 0;
    }
    printf("The entered %d values \n",size);

    for(i=0;i<size;i++)
    {
        printf("Enter element %3d: ",i+1);
        scanf("%d",&c);
        j++;

        ptr = (int*)realloc(ptr,j*sizeof(int));
        ptr[i]=c;
    }
    int max=0;
    for(i=0;i<size;i++)
    {
        if(ptr[i]>max)
        {
            max=ptr[i];
        }
    }
    printf("\nLargest no is %d",max);

    free(ptr);
}
/*
7. Write a program to demonstrate memory leak in C.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int*)malloc(sizeof(int));
    ptr = NULL;
    return 0;
}
/*
8. Write a program to demonstrate dangling pointers in C.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int*)malloc(sizeof(int));
    *ptr = 10;
    printf("Before free %d\n",*ptr);
    free(ptr);
    printf("After free %d",*ptr);

    return 0;
}
/*
9. Write a program to allocate memory dynamically of the size in bytes entered by the
user. Also handle the case when memory allocation is failed.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int*)malloc(sizeof(int));
    *ptr = 10;
    if(ptr==NULL)
    {
        printf("Memory Allocation is failed");
        return 0;
    }
}
//10. Find out the maximum and minimum from an array using dynamic memory allocation in C
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,c;

    int i=0, size=0,j=0;
    printf("Enter the size : ");
    scanf("%d",&size);

    ptr = (int*)malloc(sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory Allocation is failed");
        return 0;
    }
    printf("The entered %d values \n",size);

    for(i=0;i<size;i++)
    {
        printf("Enter element %3d: ",i+1);
        scanf("%d",&c);
        j++;

        ptr = (int*)realloc(ptr,j*sizeof(int));
        ptr[i]=c;
    }
    int max=0;
    int min=99999;
    for(i=0;i<size;i++)
    {
        if(ptr[i]>max)
        {
            max=ptr[i];
        }
        if(ptr[i]<min)
        {
            min=ptr[i];
        }
    }
    printf("Maximum no is %d\n",max);
    printf("Minimum no is %d",min);

    free(ptr);
}
