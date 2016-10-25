#include<stdio.h>
#include<conio.h>
void main()
{
char alp;
int lw,up;
clrscr();
printf("\n Enter the character:");
scanf("%c",&alp);
lw=(alp=='a' || alp=='e' || alp=='i' || alp=='o' || alp=='u');
up=(alp=='A' || alp=='E' || alp=='I' || alp=='O' || alp=='U');
if(lw || up)
printf("\n %c is Vowel",alp);
else
printf("\n %c is Consonant",alp);
getch();
}
