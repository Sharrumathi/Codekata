#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("\nEnter your value:");
scanf("%d",&num);
if(num%2==0)
printf("%d is Even",num);
else
printf("%d is Odd",num);
getch();
}
