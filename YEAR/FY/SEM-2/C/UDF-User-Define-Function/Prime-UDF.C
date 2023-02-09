//Prime number using UFD.
//created by Ariba Rajbhara.
//24-01-2023

#include<stdio.h>
#include<conio.h>
void prime(a)
{
int i,b,p=0;
b=a/2;
for(i=2;i<b;i++)
{
if(a%i==0)
{
printf("not");
p=1;
break;
}
}
if(p==0)
{
printf("prime");
}
}
void main()
{
int a;
clrscr();
printf("any number to check :");
scanf("%d",&a);
prime(a);
getch();
}
