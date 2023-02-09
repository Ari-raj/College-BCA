//Transpose of Matrix.
//Created by Ariba Rajbhara.
//16-01-2023.

#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j,t;
clrscr();
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
printf("\nTranspose of 'A' Matrix:\n\n");
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
