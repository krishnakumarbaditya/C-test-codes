#include<stdio.h>
int main()
{
    //1.
    /*
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
                printf("* ");
        }
        printf("\n");
    }
    */
     //2.
     /*
     int i1,j1;
     for(i1=1;i1<=5;i1++)
     {
         for(j1=1;j1<=5;j1++)
         {
             if(j1<=5-i1)
                printf(" ");
             else
                printf("* ");
         }
         printf("\n");
     }
     */

     //3.
     /*
     int i2,j2;
     for(i2=1;i2<=5;i2++)
     {
         for(j2=1;j2<=5;j2++)
         {
             if(j2<=6-i2)
                printf("* ");
             else
                printf(" ");
         }
         printf("\n");
     }
     */

     //4.
     /*
     int i4,j4;
     for(i4=1;i4<=5;i4++)
     {
         for(j4=1;j4<=5;j4++)
         {
             if(j4>=i4)
                printf("* ");
             else
                printf(" ");
         }
         printf("\n");
     }
     */

     //5.
     /*
     int i5,j5,k;
     for(i5=1;i5<=5;i5++)
     {
         for(j5=1;j5<=5;j5++)
         {
             if(j5<=5-i5)
                printf(" ");
             else
                printf("*");
         }
         for(k=2;k<=5;k++)
         {
             if(k<=i5)
                printf("*");
             else
                printf(" ");
         }
         printf("\n");
     }
     */

     //6.
     /*
     int i6,j6,k1;
     for(i6=1;i6<=5;i6++)
     {
         for(j6=1;j6<=5;j6++)
         {
             if(j6>=i6)
                printf("*");
             else
                printf(" ");
         }
         for(k1=1;k1<=4;k1++)
         {
             if(k1<=5-i6)
                printf("*");
             else
                printf(" ");
         }
         printf("\n");
     }
     */

     //7.
     /*
     int i7,j7,k2;
     for(i7=1;i7<=5;i7++)
     {
         for(j7=1;j7<=5;j7++)
         {
             if(j7<=6-i7)
                printf("*");
             else
                printf(" ");
         }
         for(k2=1;k2<=5;k2++)
         {
             if(k2>=i7)
                printf("*");
             else
                printf(" ");
         }
         printf("\n");
     }
     */

        //10.
         int i,j,k,k2,a;
         printf("1234321\n");
         for(i=1;i<=3;i++)
         {
             k=1;
             for(j=1;j<=3;j++)
             {
                 if(j<=4-i)
                    printf("%d",k++);
                 else
                    printf(" ");
             }
                printf(" ");

             a=4-i;
             for(k2=1;k2<=3;k2++)
             {
                 if(k2>=i)
                    printf("%d",a--);
                 else
                    printf(" ");
             }
             printf("\n");
         }


         //11.

         int i8,j8,k5,k;
         char k3,k4;
         for(i8=1;i8<=5;i8++)
         {
             k3='A';
             for(j8=1;j8<=5;j8++)
             {
                 if(j8<=5-i8)
                    printf(" ");
                 else
                    printf("%c",k3++);
             }

             for(k5=1;k5<=4;k5++)
             {
                    k4='D';
                    k=3;
                 if(k5<=i8)
                    printf("%c",k4-k);
                 else
                    printf(" ");
                k--;
             }
             printf("\n");
         }


         //13.

         int i,j,k2;
         char k,a;
         printf("ABCDEFGFEDCBA\n");
         for(i=1;i<=6;i++)
         {
             k='A';
             for(j=1;j<=6;j++)
             {
                 if(j<=7-i)
                    printf("%c",k++);
                 else
                    printf(" ");
             }
            printf(" ");

             a='G'-i;
             for(k2=1;k2<=6;k2++)
             {
                 if(k2>=i)
                    printf("%c",a--);
                 else
                    printf(" ");
             }
             printf("\n");
         }


         //18.
         int i5,j5,k;
         for(i5=1;i5<=5;i5++)
         {
             for(j5=1;j5<=5;j5++)
             {
                 if(j5<=5-i5)
                    printf(" ");
                 else
                    printf("*");
             }
             for(k=2;k<=5;k++)
             {
                 if(k<=i5)
                    printf("*");
                 else
                    printf(" ");
             }
             printf("\n");
         }
         int i6,j6,k1;
         for(i6=1;i6<=4;i6++)
         {
             for(j6=1;j6<=5;j6++)
             {
                 if(j6<=i6)
                    printf(" ");
                 else
                    printf("*");
             }
             for(k1=1;k1<=3;k1++)
             {
                 if(k1<=4-i6)
                    printf("*");
                 else
                    printf(" ");
             }
             printf("\n");
         }

        //19.
        int i,j,k,l,m,n;
        for(i=1;i<=3;i++)
        {
            for(j=1;j<=3;j++)
            {
                if(j<=3-i)
                    printf(" ");
                else
                    printf("*");
            }
            for(j=1;j<=3;j++)
            {
                printf("*");
            }
            for(k=1;k<=3;k++)
            {
                if(k<=i)
                    printf("*");
                else
                    printf(" ");
            }
            printf(" ");
            for(j=1;j<=3;j++)
            {
                if(j<=3-i)
                    printf(" ");
                else
                    printf("*");
            }
            for(j=1;j<=3;j++)
            {
                printf("*");
            }
            for(k=1;k<=3;k++)
            {
                if(k<=i)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        printf("******MySirG*******\n");
        for(m=1;m<=9;m++)
        {
            for(l=1;l<=9;l++)
            {
                if(l<=m)
                    printf(" ");
                else
                    printf("*");
            }
            for(n=1;n<=9;n++)
            {
                if(n<=10-m)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        return 0;
}
