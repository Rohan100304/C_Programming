#include<stdio.h>
#include<conio.h>
int main()
{
int x;
clrscr();
printf("enter the number between 1 to 12:");
scanf("%d",&x);
switch(x)
{
case 1:printf(" january");
break;

case 2:printf(" febuary");
break;

case 3:printf(" march")   ;
break;

case 4:printf(" april")    ;
break;

case 5: printf(" may ")      ;
break;

case 6: printf(" june")       ;
break;

default: printf("invalid number");
}
getch();
return 0;
}