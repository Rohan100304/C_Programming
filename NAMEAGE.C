#include<stdio.h>
#include<conio.h>
int main()
{
char x;
int y;
clrscr();
printf("enter your name:");
scanf("%s",&x);
printf("enter your age:");
scanf("%d",&y);
printf("\n The age of %s is %d",x,y);
getch();
return 0;
}