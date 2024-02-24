#include<stdio.h>
#include<conio.h>
int main()
{
int p,t,r,si;
clrscr();
printf("Enter the principle, time and rate:");
scanf("%d %d %d",&p,&t,&r);
si= (p*t*r)/100;
printf("the simple intrest is;%d",si);
getch();
return 0;
}