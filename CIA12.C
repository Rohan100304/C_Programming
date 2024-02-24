#include<stdio.h>
#include<conio.h>
int main()
{
int m,e,b,a,k,total,perc;
clrscr();
printf("enter Math,Economics,Business,Accountancy,kannada marks:");
scanf("%d %d %d %d %d",&m,&e,&b,&a,&k);
total = m+e+b+a+k;
perc = (total*100)/500;
printf("the total marks is:%d\n",total);
printf("the precenage is:%d\n",perc);
if(perc>80)
{
printf("the student got: A+");
}
else if(perc>=65 && perc<=80)
{
printf("the student got: A");
}
else if(perc>=50 && perc<=65)
{
printf("the student got : B");
}
else if(perc>=43 && perc<=50)
{
printf("the student got: C");
}
else if(perc<=42)
{
printf("the student got: fail");
}
getch();
return 0;
}



