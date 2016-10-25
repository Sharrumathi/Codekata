#include<stdio.h>
#include<conio.h>
void main()
{
int sum=0,i,n;
clrscr();
printf("\n Enter the number:");
scanf("%d",&n);
for(i=0;i<n;i++)
sum=sum+i;
printf("\n Sum is %d",sum);
getch();
}
