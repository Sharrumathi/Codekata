#include<stdio.h>
#include<conio.h>
void main()
{
int no,count=0;
clrscr();
printf("\n Enter the integer:");
scanf("%d",&no);
while(no!=0)
{
no=no/10;
count++;
}
printf("\n There are %d numbers in the given integer value",count);
getch();
}
