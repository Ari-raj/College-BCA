//Count row in matrix.
//Created by Ariba Rajbhara.
//20-01-2023.

#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j,rsum;
clrscr();
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("enter a[%d][%d]:",i+1,j+1);
scanf("%d",&a[i][j]);
}
}
//input of a from user.           over
for(i=0;i<3;i++)
{
rsum=0;
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
rsum=rsum+a[i][j];    //logic for sum of rows...
}
printf("%d\n",rsum);
}
getch();
}
