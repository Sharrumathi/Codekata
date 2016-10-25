#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
printf("\n Enter the year:");
scanf("%d",&year);
if(year%4==0)
printf("\n Leap Year");
else
printf("\n Not a Leap Year");
getch();
}
