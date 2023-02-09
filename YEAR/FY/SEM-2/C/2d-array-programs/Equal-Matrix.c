//write a program to check equal matrix.
//Created by Ariba rajbhara.
//16-1-2023
#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],i,j,count=0;
clrscr();

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("enter element a[%d][%d]",i+1,j+1);
scanf("%d",&a[i][j]);
}
}
//user input of a.
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("enter element b[%d][%d]",i+1,j+1);
scanf("%d",&b[i][j]);
}
}
//user input of b.
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(a[i][j] == b[i][j])
{
continue;
}
else
{
count=1;
break;
}
}
}
if (count==0)
{
printf("Equal MAtrix");
}
else
{
printf("Not A Equal matrix");
}
getch();
}
