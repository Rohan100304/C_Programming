#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter the number:");
scanf("%d",&a);
switch(a%2)
{
case 1:
printf("%d is odd",a);
break;
case 0:
printf("%d is even",a);
break;
}
getch();
}