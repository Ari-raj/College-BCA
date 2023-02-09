//Multiplication of 2 number using UFD.
//created by Ariba Rajbhara
//18-01-2023

#include<stdio.h>
#include<conio.h>
int m(int a,int b) //called function
{
  int result;
  result=a*b;
  return result;
} //udf over
void main()
{          //main start
  int x,y,ans;
  clrscr();
  printf("enter 2 numbers to");
  scanf("%d%d",&x,&y);
  ans=m(x,y);  //calling function
  printf("Multiplication of 2 number :%d",ans);
  getch();
}
