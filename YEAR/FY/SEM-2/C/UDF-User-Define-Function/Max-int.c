//check Max number using UFD.
//created by Ariba Rajbhara
//18-01-2023

#include<stdio.h>
#include<conio.h>
void max(int a,int b)
{
if(a>b)
{
printf("%d is greater than %d",a,b);
}
else
{
printf("%d is smaller than %d",a,b);
}
}
void main()
{
int x,y;
clrscr();
printf("enter a number :");
scanf("%d",&x);
printf("enter second number :");
scanf("%d",&y);
max(x,y);
getch();
}
