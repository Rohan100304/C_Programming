#include<stdio.h>
#include<conio.h>
int main()
{
int a,i,j;
clrscr();
printf("enter the number of rows:");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
printf("\t");
for(j=1;j<=i;j++)
{
printf("%d",j);
j++
}
printf("\n");
}
getch();
return 0;
}