
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Student
{
int roll,marks[3],min,max;
char name[50];
};

int main()
{
int i;
struct Student student1;
clrscr();
printf("enter the roll number:\n");
scanf("%d",&student1.roll);
printf("enter student name:\n");
scanf("%s",&student1.name);
for(i=1;i<4;i++)
{
printf("enter the %dst subject marks:",i);
scanf("%d",&student1.marks[i]);
}
printf("enter the maximum marks:");
scanf("%d",&student1.max);
printf("enter the min marks");
scanf("%d",&student1.min);


printf("\tstudent details\n");
printf("student roll number:%d\n",student1.roll);
printf("student name:%s\n",student1.name);
printf("marks in 3 subjects: %d  %d  %d\n",student1.marks[1],student1.marks[2],student1.marks[3]);
printf("max amrks:%d\n",student1.max);
printf("min marks:%d\n",student1.min);
getch();
return 0;
}