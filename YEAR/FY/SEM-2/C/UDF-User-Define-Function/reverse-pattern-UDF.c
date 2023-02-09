//reverse pattern of number using UFD.
//created by Ariba Rajbhara.
//25-01-2023

#include<stdio.h>
#include<conio.h>
int pat(int n)
{
int i,j;

for(i=n;i>=1;i--)
{
for(j=1;j<=i;j++)
{
//printf("*");
printf("%d",i);
}
printf("\n");
}
}
int main()
{
int n;
clrscr();
printf("enter n:");
scanf("%d",&n);
pat(n);
getch();
}
