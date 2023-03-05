#include<stdio.h>
#include<conio.h>
#define pi 3.14
int area(float r,float h)
{
float a;
a=2*pi*r*h+2*pi*r*r);
printf("are of cylinder is: %f",a);
getch();
}
int main()
{
float r,h;
clrscr();
printf("enter radius :");
scanf("%f",&r);

printf("enter height: ");
scanf("%f",&h);

area(r,h);
}
