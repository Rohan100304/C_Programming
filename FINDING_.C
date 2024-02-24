#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,r;
clrscr();
printf("enter the divisor and dividend:");
scanf("%d %d",&a,&b);
printf("the reminder when %d is divided by %d is :",a,b);
r= a % b;
printf("%d",r);
getch();
}