#include<stdio.h>
#include<conio.h>
#define n 5
struct cust
{
char nm[15];
int bamt;
};
typedef struct cust c;
void main()
{
c c[n];
int max;
int i;
for(i=0;i<n;i++)
{
printf("enter name:");
scanf("%s",&c[i].nm);
printf("enter amount amount:");
scanf("%d",&c[i].bamt);
}
max=0;
for(i=0;i<n;i++)
{
if(c[max].bamt<c[i].bamt)
max=i;
}
printf("\nmaxis %d",c[max].nm,c[max].bamt);
getch();
}
