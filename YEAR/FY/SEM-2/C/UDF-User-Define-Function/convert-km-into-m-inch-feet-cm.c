#include<stdio.h>
#include<conio.h>
int conv(int km)
{
float m,feet,inch,cm;

m=km*1000;
km=m/1000;
feet=m*333;
inch=feet*12;
cm=m*100;

printf("km=%f\n",km);
printf("m=%f\n",m);
printf("feet=%f\n",feet) ;
printf("inch=%f\n",inch);
printf("cm=%f\n",cm);
getch();
}
void main()
{
int km;
clrscr();
printf("enter the kilomitre");
scanf("%f",&km);
conv(km)
 }
