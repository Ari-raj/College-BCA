//Fabonic in c using UDF.
//Created by Ariba Rajbhara.
//24-01-23.

#include <stdio.h>
#include<conio.h>
void fab(n)
{
int i,t1 = 0, t2 = 1,nextTerm = t1 + t2;
 printf("Fibonacci Series: %d, %d, ", t1, t2);

  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
 }
void main() {

  int n;
  clrscr();
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  fab(n);

  getch();
}
