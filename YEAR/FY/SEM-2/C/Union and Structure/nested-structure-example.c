#include<conio.h>
#include<stdio.h>
#include<string.h>
struct date
{
int day;
int year;
};
struct nm
{
 char nm[15];
 struct date d;
};
void main()
{
 struct nm n[15];
 int i;
 clrscr();
 for(i=0;i<3;i++)
{
printf("enter name:");
scanf("%s",&n[i].nm);
}
for(i=0;i<3;i++)
{
printf("enter day:");
scanf("%d",&n[i].d.day);
}
for(i=0;i<3;i++)
{
printf("enter year");
scanf("%d",&n[i].d.year);
}
for(i=0;i<3;i++)
{
printf("%s\t%d\t%d\t\n",n[i].nm,n[i].d.day,n[i].d.year);
}
getch();
}
