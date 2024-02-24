#include<stdio.h>
#include<conio.h>
int main()
{
int x,y;
clrscr();
printf("enter the year:");
scanf("%d",&x);
y = x%4;
if(y==0)
{
printf("the entered year is leap year");
}
else
{
printf(" it is not a leap year");
}
getch();
return 0;
}
