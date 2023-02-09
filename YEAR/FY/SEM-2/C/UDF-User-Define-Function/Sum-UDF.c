//sum of 2 number using UFD.
//created by Ariba Rajbhara
//18-01-2023

#include<stdio.h>
#include<conio.h>
int sum(int s1,int s2)
{
int sum;
     sum=s1+s2;
     return sum;
}
int main()
{
int s1,s2,su;
clrscr();
  
printf("enter no 1:");
scanf("%d",&s1);
printf("enter no 2:");
scanf("%d",&s2);

su=sum(s1,s2);
printf("%d",su);

getch();
}
