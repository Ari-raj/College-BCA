//Count column in matrix.
//Created by Ariba Rajbhara.
//20-01-2023.

#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j,csum,rsum,sum=0;
 clrscr();
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
 printf("enter a[%d][%d]:",i+1,j+1);
 scanf("%d",&a[i][j]);
}
}                              //input of a from user.           over
 printf("\nSum of Row and Column:\n");
for(i=0;i<3;i++)
{
 rsum=0;
for(j=0;j<3;j++)
{
 printf("%d\t",a[j][i]);
 rsum=rsum+a[j][i];                //logic for sum of rows.
}
printf("%d\n",rsum);               //printing rsum.
}
for(i=0;i<3;i++)
{
 csum=0;
for(j=0;j<3;j++)
{
 csum=csum+a[i][j];           //logic for sum of column...
 sum=sum+a[i][j];             //logic for total sum of matrix 'a'.
}
 printf("%d\t",csum);             //printing csum.
}
 printf("%d",sum);                //printing sum.
getch();
}
