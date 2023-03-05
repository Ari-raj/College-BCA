#include<conio.h>
#include<stdio.h>
#include<string.h>
union students
{
char nm[14];
int rn;
};
void main()
{
union students s[10];
clrscr();
printf("enter name and rollno :");
scanf("%s%d",&s[1].nm,&s[1].rn);
printf("nmae:%s\trn:%d\n",s[1].nm,s[1].rn);
printf("\nenter rn and name:");
scanf("%d%s",&s[2].rn,&s[2].nm);
printf("rn:%d\tname:%s\n",s[2].rn,s[2].nm);
getch();
}
