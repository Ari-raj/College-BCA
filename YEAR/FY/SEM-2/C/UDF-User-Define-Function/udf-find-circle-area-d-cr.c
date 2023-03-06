///Write C Program to find diameter, circumference and area of circle using //User defined Function.

#include<stdio.h>
#include<conio.h>
float circler(int r)
{
float d,c,ar;
d=2*r;
c=2*3.13*r;
ar=3.14*r*r;
pintf("diameter =%f\nc=%f\narea=%f\n",d,c,ar);
}
int main()
{
int r;
clrscr();
printf("enter r");
scanf("%d",&r);
circler(r);
getch();
}
