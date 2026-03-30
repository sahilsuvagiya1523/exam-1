#include <stdio.h>
#include <conio.h>

main()
{
int marks;
char grade;

clrscr();

printf("enter your score(0-100) :");
scanf("%d",&marks);

grade = (marks >= 90 && marks <= 100)?    'A':
(marks>=80)?     'B':
(marks>=70)?     'C':
(marks>=60)?     'D':
(marks>=50)?     'E':
'f';
 printf("/n your grade is %c",grade);
 getch();
 }