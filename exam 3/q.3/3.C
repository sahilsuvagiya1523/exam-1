#include<stdio.h>
#include<conio.h>

main()
{
int num,first,last;
clrscr();

printf("enter any number:");
scanf("%d",&num);

if(num<0)
num=-num;

last = num%10;

while(num>=10)
{
     num=num/10;
}

first=num;

printf("the sum of the first and the last digit %d",first+last);

getch();
}