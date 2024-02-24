#include<stdio.h>
#include<conio.h>
int main()
{
int x,y,z;
clrscr();
printf("enter any three numbers:");
scanf("%d %d %d",&x,&y,&z);
if(x>y)
{
if(x>z && y>z)
{
printf("%d is greater when compared to other 3 numbers",x);
}
else if(x<z && y<z)
{
printf("%d is greater",z);
}
}
else if(y>x)
{
if(y>z && x>z)
{
printf("%d is the greatest",y);
}
else if(y<z && x<z)
{
printf("%d is the greatest",z);
}
}
getch();
return 0;
}