#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("\nEnter your number:");
scanf("%d",&num);
if(num>0)
printf("\%d is positive",num);
else if(num<0)
printf("\n%d is negative",num);
else
printf("\n%d is zero",num);
getch();
}
