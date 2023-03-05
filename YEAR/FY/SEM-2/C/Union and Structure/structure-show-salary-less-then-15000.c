#include <stdio.h>
#include <conio.h>
struct Employee {
 int id;
 char name[20];
 float salary;
} emp;
int main()
 {
 struct Employee emp[5];
 int i;
 for (i = 0; i < 5; i++)
  {
 printf("Enter the details of Employee %d\n", i + 1);

 printf("Enter ID: ");
 scanf("%d", &emp[i].id);

 printf("Enter Name: ");
 scanf("%s", &emp[i].name);

 printf("Enter Salary: ");
 scanf("%f", &emp[i].salary);
 }
 printf("\nEmployees with salary less than 15000\n");
 for (i = 0; i < 5; i++) {
 if (emp[i].salary < 15000) {
 printf("\nEmployee %d\n", i + 1);
 printf("ID: %d\n", emp[i].id);
 printf("Name: %s\n", emp[i].name);
 printf("Salary: %.2f\n", emp[i].salary);
 }
 }
 getch();
}
