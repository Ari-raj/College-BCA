#include<stdio.h>
#include<conio.h>
int week(int day)
switch(day)
{
case 1:
printf("sunday");
break;
case 2:
printf("monday");
break;
case 3:
printf("tuesday");
break;
case 4:
printf("wednesday");
break;
case 5:
printf("thursday");
break;
case 6:
printf("friday");
break;
case 7 :
printf("saturday");
break;
defualt:
printf("your number!! is wrong,select between 1-7 ");
}
getch();
}
void main()
{
int day;
clrscr();
printf("the day number :");
scanf("%d",&day);
week(day);
}
