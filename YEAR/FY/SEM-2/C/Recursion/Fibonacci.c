#include<stdio.h>
#include<conio.h>
int fab(int a,int b,int n)
{
int c;
if(n==0)
return;
else
c=a+b;
printf("%d\t",c);
a=b;
b=c;
fab(a,b,n-1);
}
int main()
{
int n;
clrscr();
printf("enter n:");
scanf("%d",&n);
fab(-1,1,n);
getch();
}
