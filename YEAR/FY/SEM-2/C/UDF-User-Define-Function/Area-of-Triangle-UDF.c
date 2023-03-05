//Find Area of Triangle using UFD.
//created by Ariba Rajbhara
//20-01-2023

#include<stdio.h>
#include<conio.h>
float tarea(float b,float h)
{
float ans;
ans=0.5*(b*h);
return ans;
}
float main()
{
float a,b,ans;
clrscr();
printf("enter height of triangle :");
scanf("%f",&a);
printf("enter b of triangle :");
scanf("%f",&b);
ans=tarea(a,b);
printf("area of triangle is %.1f",ans);
getch();
}
