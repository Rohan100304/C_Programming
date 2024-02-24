#include<stdio.h>
#include<conio.h>
int main()
{
int a,sum=0;
printf("THE SUM IS:");
for(a=0;a<10;a++)
{
if(a%2==0)
{
sum++;
}
continue;
}
printf("%d",sum);
getch();
return 0;
}