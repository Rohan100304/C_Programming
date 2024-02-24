#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
clrscr();
scanf("%d %d",&a,&b);
c= a % b;
printf("the reminder is %d",c);
getch();
return 0;
}