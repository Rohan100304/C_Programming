#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
clrscr();
printf("enter the table number that you want:");
scanf("%d",&b);
for(a=0;a<11;a++)
{
printf("\n%d*%d=%d",a,b,a*b);
}
getch();
return 0;
}