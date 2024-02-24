#include<stdio.h>
#include<conio.h>
int main()
{
int choice;
double square,absolute;
char cha,uppercha,lowerchar;
printf("select anything from the below options:\n 1.squareroot(sqrt)\n 2.Absolute value(abs)\n 3.Upper case \n 4.Lower case:");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
int num
printf("enter the number:");
scanf("%d",&num);
square = sqrt(num);
printf("The square root is %ld",square);
}
}getch();
return 0;
}
