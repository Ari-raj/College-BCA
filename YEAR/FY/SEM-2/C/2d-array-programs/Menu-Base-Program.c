/*1. Write a Menu base C program with following options.
1. Addition of two Matrices.
2. Subtraction of two Matrices.
3. Multiplication of two Matrices.
4. Transpose of Single Matrix.
5. Exit.*/
//Created by Ariba Rajbhara.
//16-01-2023

#include<stdio.h>
#include<conio.h>
int main()
{
int a[3][3],b[3][3],i,j,sum[3][3],sub[3][3],t,n,mul[10][10],k;
clrscr();
printf("enter the program name \nfor sum type: 0 \nfor subtraction type: 1\nfor multipluction type: 2 \nfor transpose type: 3\nfor exit type: 5: ");
scanf("%d",&n);
clrscr();

if(n == 0)  //sum of a and b AS 0.		                    0
{
//user input of a and b matrix start
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("enter the values [%d][%d]: ",i+1,j+1);
scanf("%d",&a[i][j]);
}
}
//user input of matrix a over and b start.
//conditions for sum of a and b start
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("enter the values [%d][%d]: ",i+1,j+1);
scanf("%d",&b[i][j]);
sum[i][j]=a[i][j]+b[i][j];
}
}
clrscr();
//user input of b over.
  printf("\n\ta\t    +\t\tb\t  =\n\n");
//conditions for sum of a and b over.
for(i=0;i<3;i++)                  //i start
{
for(j=0;j<3;j++)                  //j start
{
printf("%d\t",a[i][j]);
}                                 //j over
for(j=0;j<3;j++)                  //j start
{
printf("%d\t",b[i][j]);
}                                 //j over
for(j=0;j<3;j++)                  //j start
{
printf("%d\t",sum[i][j]);
}                                 //j over
printf("\n");
}                                 //i over
//4 loop for printing matrix in a+b=c format.
}


else if( n== 1)    //condition for subtraction of a and b as 1.     1
{
//user input of a and b matrix start
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("enter the values [%d][%d]: ",i+1,j+1);
scanf("%d",&a[i][j]);
}
}
//user input of matrix a over and b start
//conditions for subtraction of a and b start
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("enter the values [%d][%d]: ",i+1,j+1);
scanf("%d",&b[i][j]);
sub[i][j]=a[i][j]-b[i][j];
}
}
clrscr();
//user input of b over,
printf("\n\ta\t    -\t\tb\t  =\n\n");
//conditions for subtraction of a and b over.
for(i=0;i<3;i++)                  //i start
{
for(j=0;j<3;j++)                  //j start
{
printf("%d\t",a[i][j]);
}                                 //j over
for(j=0;j<3;j++)                  //j start
{
printf("%d\t",b[i][j]);
}                                 //j over
for(j=0;j<3;j++)                  //j start
{
printf("%d\t",sub[i][j]);
}                                 //j over
printf("\n");
}                                 //i over
}
else if(n == 2)   //condition of multiplication as 2.               2
{
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
printf("Enter a[%d][%d] : ", i, j);
scanf("%d", &a[i][j]);
 }
 }
 printf("\nEnter elements for Second Matrix: \n");
 for(i = 0; i < 3;i++)
 {
 for(j = 0; j < 3; j++)
 {
printf("Enter b[%d][%d] : ", i, j);
scanf("%d", &b[i][j]);
 }
 }
 for (i = 0; i < 3;i++) // first matrix row
 {
 for (j = 0; j < 3; j++) // second matrix column
 {
 mul[i][j] = 0;
for (k = 0; k < 3; k++)
{
 mul[i][j] = mul[i][j] + ( a[i][k] * b[k][j] );
}
 }
 }
 printf("\n First Matrix : \n");
 for(i=0;i < 3;i++)
 {
 for(j=0;j < 3;j++)
 {
printf("%d\t", a[i][j]);
 }
 printf("\n");
 }
 printf("\n Second Matrix:\n");
 for(i=0;i < 3;i++)
 {
 for(j=0;j < 3;j++)
 {
printf("%d\t", b[i][j]);
 }
 printf("\n");
 }
 printf("\nMultiplication of Matrices : \n");
 for(i=0;i < 3;i++)
 {
 for(j=0;j < 3;j++)
 {
printf("%d\t", mul[i][j]);
 }
 printf("\n");
 }

}
else if(n == 3)   //condition of transpose as 3                      3
{
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("enter a[%d][%d]:",i+1,j+1);
scanf("%d",&a[i][j]);
}
}
printf("\n'A' Matrix:\n\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++)
{
for(j=i+1;j<3;j++)
{
 t=a[i][j];
 a[i][j]=a[j][i];
 a[j][i]=t;
}
}
clrscr();
printf("\nTranspose of 'A' Matrix:\n\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
}
else if(n == 5)      //condition of exit as 5.                     4
{
printf("exit!!");
}

else
{
printf("read instuction properly");
}
getch();
}
