
#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,,m[20][20],i,j;
printf("enter the number of rows and column:");
scanf("%d %d",&a,&b);
printf("enter the numbers:");
for(i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
scanf("%d",&m[i][j]);
}
printf("thhematrix is :");
for(i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
printf("%d\n",m[i][j]);
}
printf("\n");
}

getch();
return 0;
	}