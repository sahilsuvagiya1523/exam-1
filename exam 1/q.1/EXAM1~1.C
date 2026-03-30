#include<conio.h>
#include<stdio.h>

main()
{
float c,f;
clrscr();
printf("the temperature in celsius:");
scanf("%f",&c);

f=(9/5 * c)+32;
printf(" the tempruture in fahrenheit : %f",f);
getch();
}