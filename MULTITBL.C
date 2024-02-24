#include<stdio.h>
#include<conio.h>
int main()
{
int n,i;
printf("enter the table number that you want:");
scanf("%d",&n);
for( i=n;i<=n*10;i=n+1)
{
printf("%d",i);
}
getch();
return 0;
}
/*int i;
clrscr();
printf("the table of 19 is:");
for(i=19;i<=190;i=i+19)
{
printf("\n%d",i);
}
getch();
return 0;
} */
