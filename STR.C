#include<stdio.h>
#include<conio.h>
struct employee
{
char name;
int id;
int salary;
};

int main()
{
struct employee emp3;
struct employee emp2;
clrscr();


//entrig the details of emp1
strcpy(emp3.name,"rohan");
emp3.id = 31;
emp3.salary = 20000;



//entering the details of emp2
strcpy(emp2.name,"gagan");
emp2.id = 32;
emp2.salary = 20000;

//printing the info
printf("employee 1 name:%s\n",emp3.name);
printf("employee 1 id:%d\n",emp3.id);
printf("employee 1 salary:%d\n",emp3.salary);

printf("\n\n");
//printing emp2

printf("employee 2 name:%s\n",emp2.name);
printf("employee 2 id:%d\n",emp2.id);
printf("employee 2 salary:%d\n",emp2.salary);
getch();
return 0;
}