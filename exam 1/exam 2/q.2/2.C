#include<stdio.h>
#include<conio.h>

main()
{
int score;
char grade;

clrscr();

printf("enter your score:");
scanf("%d",&score);

if(score>=90)
 grade='A';

 else if(score>=80)
 grade='B';

 else if(score>=70)
 grade='C';

 else if(score>=60)
 grade='D';

 else
 grade='F';

 printf("your grade is %c",grade);

 switch(grade)
 {
 case'A':
 printf("excellent work!");
 break;

 case'B':
 printf("well done!");
 break;

 case'C':
 printf("good job!");
 break;

 case'D':
 printf("you passed,but you could do better");
 break;

 case'F':
 printf("sorry you failed");
 break;

 default:
 printf("invalid grade");
 }
 getch();
 }