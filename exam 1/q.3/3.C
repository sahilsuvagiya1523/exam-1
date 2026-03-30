#include <conio.h>
#include <stdio.h>

main()
{
int a,b,c;

clrscr();

printf("first angle :");
scanf("%d",&a);

printf("second angle :");
scanf("%d",&b);

c=180 - (a+b);

printf("third angle  : %2d",c);

getch();

}