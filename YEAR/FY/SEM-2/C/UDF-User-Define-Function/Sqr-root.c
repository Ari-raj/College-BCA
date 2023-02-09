//sqr root of number using UFD.
//created by Ariba Rajbhara
//18-01-2023

#include<stdio.h>
#include<conio.h>
int sqr(int n)
{
int ans;
ans=n*n;
return ans;
}
void main()
{
int n,ans;
clrscr();
printf("enter the number to square it :");
scanf("%d",&n);
ans=sqr(n);
printf("%d",ans);
getch();
}
