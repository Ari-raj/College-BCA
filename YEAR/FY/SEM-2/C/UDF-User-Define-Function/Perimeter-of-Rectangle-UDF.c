//Write C Program to find perimeter of rectangle using User defined Function.(width + height) x 2
//created by Ariba Rajbhara.
//20-01-2023

#include<stdio.h>
#include<conio.h>
float rper(float w,float h)
{
float ans;
ans=(w+h)*2;
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
ans=rper(w,h);
printf("perimeter of rectangle %.1f",ans);
getch();
}
