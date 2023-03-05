#include<stdio.h>
#include<conio.h>
int avg(int a,int b,int c,int d,int e)
{
printf("average=%d", (a+b+c+d+e)/5);
getch();
}
void main()
{
int a,b,c,d,e;
clrscr();
printf("enter 5 number");
scanf ("%d %d %d %d %d ",&a,&b,&c,&d,&e );
avg(a,b,c,d,e);
}
