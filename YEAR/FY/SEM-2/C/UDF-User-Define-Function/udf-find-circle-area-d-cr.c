///Write C Program to find diameter, circumference and area of circle using //User defined Function.

#include<stdio.h>
#include<conio.h>
float circler(float r)
{
int ans;
ans=2*r;
return ans;
}
int main()
{
int r,s;
clrscr();
printf("enter r");
scanf("%d",&r);
ans=circler(r);
printf("d=%d",ans);
getch();
}
