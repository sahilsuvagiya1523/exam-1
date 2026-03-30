#include<stdio.h>
#include<conio.h>

main()
{long int num;
int count = 0;

clrscr();

printf("enter any number:");
scanf("%d",&num);

if(num==0)
{
 count = 1;
}
else
{
if(num < 0)

while(num>0)
{
 num=num/10;
 count++;
 }
 }
 printf("total number of digit: %d",count);

 getch();


}