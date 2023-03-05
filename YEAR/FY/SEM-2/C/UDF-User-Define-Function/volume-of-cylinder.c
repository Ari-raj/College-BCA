#include<stdio.h>
#include<conio.h>
#define pi 3.14
int vol(int r,int h)
{
float v;
v=2*pi*r*h;
printf("volume of cylinder : %f ", v);
}
int main()
{
int r,h;
clrscr();

printf("enter radius: ");
scanf("%d\n",&r);

printf("enter height: ");
scanf("%d\n",&h);

vol(r,h); 
getch();
}
