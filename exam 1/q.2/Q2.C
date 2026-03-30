#include <conio.h>
#include <stdio.h>

int main()
 {
 float salary,hra,da,ta;
 float a,b,c,gross;

 clrscr();

 printf("enter the base salary: ");
 scanf("%f",&salary);

 printf("enter the hra percentage : ");
 scanf("%f",&hra);

 printf("enter the da percentage : ");
 scanf("%f",&da);

 printf("enter the ta salary : ");
 scanf("%f",&ta);

 a=salary * hra/100;
 b=salary * da/100;
 c=salary * ta/100;

 gross = salary + a + b + c;

 printf("/n gross salary = %2f",gross);

 getch();
 }