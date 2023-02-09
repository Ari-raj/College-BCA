//Subtraction of 2 Matrix.
//Created by Ariba Rajbhara.
//16-01-2023.

#include<stdio.h>
#include<conio.h>
int main()
{
int a[3][3],b[3][3],i,j,sub[3][3];
clrscr();
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
//conditions for subtraction of a and b start.
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("enter the values [%d][%d]: ",i+1,j+1);
scanf("%d",&b[i][j]);
sub[i][j]=a[i][j]-b[i][j];
}
}
//user input of b over,
printf("\n\ta\t    -\t\tb\t  =\n\n"); //formating
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
//4 loop for printing matrix in a-b=c format.
getch();
}
