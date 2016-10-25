#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("\n Enter three values:");
scanf("%d %d %d",&a,&b,&c);
if((a>=b)&&(a>=c))
printf("%d is bigger",a);
else if((b>=a)&&(b>=c))
printf("%d is bigger",b);
else
printf("%d is bigger",c);
getch();
}
