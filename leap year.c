#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter the year : ");
scanf("%d",&n);
if(n%4==0)
{
if(n%100==0)
{
if(n%400==0)
{
printf("leap");
}
else
{
printf("not a leap");
}
}
else
{
printf("leap");
}
}
else
{
printf("not a leap");
}
getch();
}
