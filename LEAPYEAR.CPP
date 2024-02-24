#include<stdio.h>
#include<conio.h>
int main()
{
int x,y;
clrscr();
printf("enter the year:");
scanf("%d",&x);
if(x%4==0)
{
	printf("\n %d is leap year",x);
}
if(x%4!=0)
{
	printf("\n%d is a not a leap year",x); }
getch();
return 0;
}