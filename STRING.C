#include<stdio.h>
#include<conio.h>
int main()
{
char str[100];
printf("enter the first char");
gets(str);
printf("the upper string is %s",strlwr(str));
printf("the lower sring is %s",strupr(str));
getch();
return 0:
}