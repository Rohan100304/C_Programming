#include<stdio.h>
#include<conio.h>
int main()
{
int l,b,p,a;
clrscr();
printf("enter Length and Breadth:");
scanf("%d %d",l,b);
p= (l+b)*2;
a= l*b;
if(a>p)
{
printf("the are of the recatamge is greater than peremeter");
}
if(a<p)
{
printf("\nthe area is not greater than paermeter");
}
getch();
return 0;
}

