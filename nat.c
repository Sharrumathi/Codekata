#include<stdio.h>
#include<conio.h>
void maid()
{
int i,sum=0,n;
clrscr();
printf("\n Enter the number:");
scanf("%d",&n);
for(i=0;i<n;i++)
sum=sum+i;
printf("\n Sum of the %d number is %d",n,sum);
getch();
}
