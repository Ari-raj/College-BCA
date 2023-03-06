#include<conio.h>
#include<conio.h>
void convert(float c)
{
float f;
f=c*9/5+32;
printf("f=%1.f",f) ;
getch();
}
void main()
{
float c;
printf("enter c:");
scanf("%f",&c);
convert(c) ;
}
