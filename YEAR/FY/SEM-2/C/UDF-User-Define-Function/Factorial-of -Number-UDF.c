//Factorial of number using UFD.
//created by Ariba Rajbhara.
//24-01-2023

#include<stdio.h>
#include<conio.h>
int fact(n)
{
int i,f=1,ans;
for(i=0;i<=n;i++)
{
f=f*i;
}
return f;
}
int main()
{
int n,ans;
clrscr();
printf("enter n :");
scanf("%d",&n);
ans=fact(n);
printf("%d",ans);
getch();
}
