#include<stdio.h>
#include<conio.h>
int main()
{
 int m,e,b,perc;
 clrscr();
 printf("\nEnter math marks:");
 scanf("%d",&m);
 printf("\nEnter economics marks:");
 scanf("%d",&e);
 printf("\nEnter business marks:");
 scanf("%d",&b);
 perc = (m+e+b)*100/300;
 printf("\n The precentage of three subjects is:%d",perc);
 if(perc>=100  && perc>=90)
 {
	 printf("\nthe student got grade");
 }
 else if(perc<=89  && perc>=50)
 {
	printf("\nthe student got B grade");
 }
 else if(perc<=49 && perc>=25)
{
	printf("\nthe student got C grade");
}
else if(perc<25)
{
	printf("\nthe student has failed and got F grade");
	}
 getch();
 return 0;}
