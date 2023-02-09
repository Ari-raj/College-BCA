//check wether user input matrix is upper triangle matrix
//created By Ariba Rajbhara
//16-01-2023
#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j,count;
clrscr();
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("enter element a[%d][%d]",i+1,j+1);
scanf("%d",&a[i][j]);
}
}
printf("\n");
//user input over
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
count=1;
for(i=1;i<3;i++)
{
for(j=0;j<i;j++)
{
if(j<i && a[i][j]!=0)
count=0;
}
}
if (count == 1)
{
printf("its upper triange Matrix");
}
else
{
printf("not a upper triange matris");
}
getch();
}
