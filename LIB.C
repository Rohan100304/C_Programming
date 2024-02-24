#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,squareroot
char upperch,upr;
printf("enter 1 for squareroot\n or 2 for chaning the case of word:");
printf("%d",&a);
switch(a)
{
case 1:
{
printf("enter the number");
scanf("%d",&b);
squareroot = sqrt(b);
printf("the squarerrot is:%d",squareroot);
}
break;

case 2: printf("enter the word");
scanf("%s",&upperch);
upr = toupper(upperch);
printf("%s",upr);
break;

default: printf("error");
}
getch();
return 0;
}