//reverse the number using UFD.
//created by Ariba Rajbhara.
//24-01-2023

#include<stdio.h>
#include<conio.h>
int ret(int n)
{
int r,rev=0;
while(n>0)
{
r=n%10;
n=n/10;
rev=rev*10+r;
}
return rev;
}
int main()
{
int n,ans;
clrscr();
printf("enter n :");
scanf("%d",&n);
ans=ret(n);
printf("%d",ans);
getch();
}
