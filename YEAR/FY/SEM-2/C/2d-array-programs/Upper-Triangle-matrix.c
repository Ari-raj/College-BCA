//check wether user input matrix is upper triangle matrix
//created By Ariba Rajbhara
//16-01-2023
#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],i,j,c=0;
clrscr();
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("enter a[%d][%d]:",i+1,j+1);
scanf("%d,",&a[i][j]) ;
}
}
for(i=0;i<3;i++)
{
for(j=1;j>i;j++)
{
if(j>i)
if(a[i][j] == 0)
c=1;
continue;
}
}
if(c == 1)
{
printf("its upper triangler matrix:\n")      ;
}
else
{
printf("not\n");
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
getch();
}
