#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("\n Enter your character:");
scanf("%c",&c);
if( (c>='a'&&c<='z') || (c>='A'&&c<='Z') )
printf("\n %c is alphabet",c);
else
printf("\n Not an alphabet");
getch();
}
