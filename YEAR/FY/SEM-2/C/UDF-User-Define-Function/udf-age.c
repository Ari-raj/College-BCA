#include<stdio.h>
#include<conio.h>
int findage(int age)
{
if(age<18)
{
printf("you are minor: ");
}
else
{
if(age>=18&&age<=60)
{
printf("you are big");
}
}
if(age>60)
{
printf("you are to oldd budhe");
}
getch();
}

void main()
{
int age;
clrscr();

printf("enter you age : ") ;
scanf("%d",&age);

findage(age);
}
