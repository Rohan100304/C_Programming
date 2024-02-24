#include<stdio.h>
#include<conio.h>
int main(int argv, char *avgc[])
{
int x;
printf("%d",argv);
for(x=1;x<argv;x++)
{
printf("command line argument of %d :%s\n",x,argv[x]);
}
getch();
return 0;
}