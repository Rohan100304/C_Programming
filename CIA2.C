#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,avg;
clrscr();
printf("enter the 3 numbers:");
scanf("%d %d %d",&a,&b,&c);
avg= (a*b*c)/3;
printf("the average of 3 numbers is:%d",avg);
getch();
return 0;
}