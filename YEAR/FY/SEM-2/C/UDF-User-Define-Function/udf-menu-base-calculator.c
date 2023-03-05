#include<stdio.h>
#include<conio.h>
int cal(char op,int a,int b)
{
int result;

switch (op)
{
case '+':
result = a+b;
printf("result=%.2f",result);
break;

case'-':
result=a-b;
printf("result=%.2f",result);
break;

case'*':
result=a*b;
printf("result: %.2f",result);
break;

case'/':
result=a*b;
printf("result : %.2f");
break;

defult:
printf("invilid !!!");
}
getch();
}

void main()
{
int a,b;
char op;
clrscr();

printf("enter the value ");
scanf("%c\n",&op);

printf("enter the value of a:");
scanf("%d\n",&a);

printf("enter the value of b;:");
scanf("%d\n",&b);

cal(op,a,b);
}
