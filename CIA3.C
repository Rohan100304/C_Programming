
#include<stdio.h>
#include<conio.h>
int main()
{
float f,c;
clrscr();
printf("enter the temperature in celcius:");
scanf("%f",&c);
f= (c*9/5)+32;
printf("the temperature in frahenite is:%f",f);
getch();
return 0;
}