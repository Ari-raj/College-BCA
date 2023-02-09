//Pattern of number using UFD.
//created by Ariba Rajbhara.
//25-01-2023

#include<stdio.h>
#include<conio.h>
int pat(int n)
{
int i,j;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("%d",j);
}
printf("\n");
}
}
int main()
{
int n;
printf("enter n:");
scanf("%d",&n);
pat(n);
getch();
}
