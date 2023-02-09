//Count column in matrix.
//Created by Ariba Rajbhara.
//20-01-2023.

#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j,csum;
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
printf("\n Sum of Column:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[j][i]);
}
printf("\n");
}
for(i=0;i<3;i++)
{
csum=0;
for(j=0;j<3;j++)
{
csum=csum+a[i][j];    //logic for sum of column...
}
printf("%d\t",csum);
}
getch();
}
