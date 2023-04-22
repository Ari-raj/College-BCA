//write a program to check a identity matrix.
//Created by Ariba Rajbhara
//16-1-2023

#include<stdio.h>
#include<conio.h>
void main()
{
 int a[3][3],i,j,id=0;
 clrscr();
 for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
{
  printf("enter a[%d][%d]:",i+1,j+1);
  scanf("%d",&a[i][j]);
}
}
//user input of a 3*3 matrix.
for(i=0;i<3;i++)
{
  for(j=i+1;j<3;j++)
{
  if(i==j)
  if(a[i][j])
  continue;
  if(a[i][j]==1)
  continue;
  if(a[i][j]==0)
  id=1;
  continue;
}
}
if(id==1)
{
printf("\nidentity matrix\n");
  for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
{
   printf("%d\t",a[i][j]);
}
printf("\n");
}
}
else if(id==0)
{
 printf("not an Identity Matrix");
}
getch();
}
