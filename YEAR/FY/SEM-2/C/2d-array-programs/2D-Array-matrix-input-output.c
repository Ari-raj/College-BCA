//2D Array of Matrix Input and Output Format.
//Created by Ariba Rajbhara.
//16-01-2023.
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[3][3];
clrscr();
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("enter the values [%d][%d]: ",i+1,j+1);
scanf("%d",&a[i][j]);
}
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
