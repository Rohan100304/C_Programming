#include<stdio.h>
#include<conio.h>
int main()
{
FILE *fp;
char ch[100];
clrscr();
fp=fopen("yoyo.txt","w+");
fprintf(fp,"%s","hello evereyone");
fclose(fp);


fp=fopen("yoyo.txt","r");
fscanf(fp,100,ch);
printf("%s",ch);
fclose(fp);
getch();
 return 0;
 }