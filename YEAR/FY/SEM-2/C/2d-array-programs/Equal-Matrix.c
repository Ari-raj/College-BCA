//write a program to check equal matrix.
//Created by Ariba rajbhara.
//16-1-2023
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
for(j=0;j<3;j++)
{
printf("enter b[%d][%d]:",i+1,j+1);
scanf("%d,",&b[i][j]) ;
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(a[i][j] != b[i][j])
{
c=1;
}
}
}
if(c==0)
{
printf("its a equal matrix:\n");
}
else
{
printf("not a equal matrix:\n");
}
printf("a matrix :\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]) ;
}
printf("\n");
}
printf("a matrix :\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",b[i][j]) ;
}
printf("\n");
}
getch();
}
