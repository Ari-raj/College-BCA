#include<stdio.h>
#include<conio.h>
void convert(int cm)
{
float m,km;
m=cm/100;
km=m/1000;
printf("km=%.2f\nm=%.2f\n",km,m);
getch();
}
void main()
{
int cm;
printf("enter cm:");
scanf("%d",&cm);

convert(cm);
}
