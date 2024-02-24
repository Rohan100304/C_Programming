#include<stdio.h>
#include<conio.h>
struct info
{
char name[50];
int age[3] ;
float height[3];
};

int main()
{
int i;
struct info people[3];
clrscr();
for(i=1;i<4;i++)
{
printf("enter the %dst person name,age and height:",i);
scanf("%s %d %f",&people[i].name,&people[i].age,&people[i].height[i]);
}
printf("\t information\n");
printf("name:%s\n",people[1]name);
printf("age:%d\n",people[1].age);
printf("height:%f\n",people[1].height);
printf("name:%s\n",people[2].name);
printf("age:%d\n",people[2].age);
printf("height:%f\n",people[2].height);
printf("name:%s\n",people[3].name);
printf("age:%d\n",people[3].age);
printf("height:%f\n",people[3].height);
getch();
return 0;
}