//Find Max Between 3 number using UFD.
//created by Ariba Rajbhara
//20-01-2023

#include<stdio.h>
#include<conio.h>
int maxof3(int x,int y,int z)
{
int and;
if(x>y && x>z)
{
return x;
}
else if(y>z)
{
return y;
}
else
{
return z;
}
}
int main()
{
int a,b,c,ans;
clrscr();
printf("enter 3 number:");
scanf("%d%d%d",&a,&b,&c);
ans=maxof3(a,b,c);
printf("maximum number is :%d",ans);
getch();
}
