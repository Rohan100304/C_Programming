
#include<stdio.h>
#include<conio.h>
int CircleArea(int r)
{
return 3.14*r*r;
}

int RectangleArea(int l,int b)
{
return l*b;
}

int main()
{
int l,b,r,areaR,areaC;
printf("enter the radius of the circle:");
scanf("%d",&r);
printf("enter the length  of the rectangle");
scanf("%d",&b);
printf("enter the base of the rectangle");
scanf("%d",&b);

areaC = CircleArea();
printf("the area of the circle is:%d",areaC);

areaR = ReactangleArea()
printf(" the area of the reactangle is :%d",areaR);

getch();
return 0;
}