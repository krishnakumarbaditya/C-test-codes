//1. Write a function to swap values of two in variables of calling function. (TSRS)
#include<stdio.h>
void swap(int *,int *);
int main()
{
    int a,b;
    printf("Enter two numbers.\n");
    scanf("%d %d",&a,&b);
    printf("Before Swapping a=%d and b=%d\n",a,b);
    swap(&a,&b);
    printf("After Swapping a=%d and b=%d",a,b);
    return 0;
}
void swap(int *p,int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
}

//2. Write a function to swap strings of two char arrays of calling functions.
#include<stdio.h>
void swapstr(char **,char **);
int main()
{
    char *a[10],*b[10];
    printf("Enter two strings.\n");
    gets(a);
    gets(b);
    printf("Before Swap Two Strings are %s and %s\n",a,b);
    swapstr(&a,&b);
    printf("After Swap Two Strings are %s and %s",a,b);
    return 0;
}
void swapstr(char **p,char **q)
{
    char *t;
    t=*p;
    *p=*q;
    *q=t;
}

//3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include<stdio.h>
void sort(int *,int );
int main()
{
    int a[5];
    printf("Enter numbers in array.\n");
    int i;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("Before\n");
    for(i=0;i<5;i++)
        printf("%d ",a[i]);
    printf("\n");
    sort(a,5);
    printf("After\n");
    for(i=0;i<5;i++)
        printf("%d ",a[i]);
    return 0;
}
void sort(int *ptr,int size)
{

    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=i;j<size;j++)
        {
            if(ptr[i]>ptr[j])
            {
                temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }
        }
    }

}

//4. Write a program in C to demonstrate how to handle the pointers in the program.
#include<stdio.h>
int main()
{
    int x=5;
    int *p,**q,***r;
    p=&x;
    q=&p;
    r=&q;
    printf("%d %d %d %d\n",p,&r,*q,*&x);
    printf("%d %d %d %d",**r,&q,**&p,x);
    return 0;
}
//5. Write a program to find the maximum number between two numbers using a pointer
#include <stdio.h>
void main()
{
 int fno,sno,*ptr1=&fno,*ptr2=&sno;

   printf("Pointer : Find the maximum number between two numbers :\n");
   printf("------------------------------------------------------------\n");

   printf(" Input the first number : ");
   scanf("%d", ptr1);
   printf(" Input the second  number : ");
   scanf("%d", ptr2);


    if(*ptr1>*ptr2)
    {
     printf("\n\n%d is the maximum number.\n\n",*ptr1);
    }
    else
    {
     printf("\n\n %d is the maximum number.\n\n",*ptr2);
    }
}

//6. Write a program to calculate the length of the string using a pointer
#include <stdio.h>
int calculateLength(char*);

void main()
{
   char str1[25];
   int l;
	printf("Pointer : Calculate the length of the string :\n");
	printf("---------------------------------------------------\n");

   printf("Input a string : ");
   fgets(str1, sizeof str1, stdin);

   l = calculateLength(str1);
   printf("The length of the given string %s is : %d ",str1, l-1);
   printf("\n\n");

}

int calculateLength(char* ch)
{
   int ctr = 0;
   while (*ch != '\0')
   {
      ctr++;
      ch++;
   }
   return ctr;
}

//7. Write a program to count the number of vowels and consonants in a string using a pointer.
#include <stdio.h>
int main()
{
    char str[150];
    char *p;
    int  VCnt=0,CCnt=0;

    printf("Enter the string: ");
    fgets(str, 150, stdin);

    p=str;
    while(*p!='\0')
    {
        if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U' ||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
            VCnt++;
        else
            CCnt++;
        p++;
    }

    printf("Number of Vowels in String: %d\n",VCnt);
    printf("Number of Consonants in String: %d",CCnt);
    return 0;
}

//8. Write a program to compute the sum of all elements in an array using pointers.
#include <stdio.h>
int main()
{
   int arr1[10];
   int i,n, sum = 0;
   int *pt;

 	printf("Pointer : Sum of all elements in an array :\n");
	printf("------------------------------------------------\n");

   printf("Input the number of elements to store in the array : ");
   scanf("%d",&n);

   printf("Input %d number of elements in the array : \n",n);
   for(i=0;i<n;i++)
   {
	  printf("element - %d : ",i+1);
	  scanf("%d",&arr1[i]);
   }


   pt = arr1;
   for (i=0; i<n;i++)
   {
      sum = sum + *pt;
      pt++;
   }
   printf("The sum of array is : %d\n\n", sum);
}

//9. Write a program to print the elements of an array in reverse order.
#include<stdio.h>
int main()
{
   int size,i,arr[5];
   int *ptr;
   ptr = &arr[0];

   printf("Enter the size of array : ");
   scanf("%d",&size);

   printf("\nEnter %d integers into array: ",size);
   for (i=0; i<size;i++)
   {
      scanf("%d",ptr);
      ptr++;
   }

   ptr=&arr[size - 1];

   printf("\nElements of array in reverse order are :");

   for (i = size - 1; i >= 0; i--)
   {
      printf("\n%d",*ptr);
      ptr--;
   }
}
//10. Write a program to print a string in reverse using a pointer.
#include <stdio.h>
#include <string.h>
void reverseString(char* str)
{
	int l, i;
	char *beginptr, *endptr, ch;

	l = strlen(str);

	beginptr = str;
	endptr = str;

	for (i = 0; i < l - 1; i++)
		endptr++;
	for (i = 0; i < l / 2; i++) {

		ch = *endptr;
		*endptr = *beginptr;
		*beginptr = ch;

		beginptr++;
		endptr--;
	}
}
int main()
{
	char str[25] = "KrishnakumarBaditya";
	printf("Enter a string: %s\n", str);
	reverseString(str);
	printf("Reverse of the string: %s\n", str);
	return 0;
}
