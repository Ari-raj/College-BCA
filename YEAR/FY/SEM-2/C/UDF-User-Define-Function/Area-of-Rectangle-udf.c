//Write C Program to find area of rectangle using User defined Function.
//created by Ariba Rajbhara
//20-01-2023

#include<stdio.h>
#include<conio.h>
float arear(float w,float h)
{
float ans;
ans=w*h;
return ans;
}
float main()
{
float w,h,ans;
clrscr();
printf("enter width:");
scanf("%f",&w);
printf("enter height:");
scanf("%f",&h);
ans=arear(w,h);
printf("area of rectangle is: %.1f",ans);
getch();
} 
