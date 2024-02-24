#include<stdio.h>
#include<conio.h>
int main()
{
int i,sum=0;
clrscr();
for(i=0;i<=10;i++)
{
if(i%2==0)
{
continue;
}
sum += i;
}
      printf("the sum of odd numbers is:%d",i);
      getch();
      return 0;
      }
