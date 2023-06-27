#include<stdio.h>
#include<conio.h>
void main()
{
int ch;
printf("1.Red\n2.Blue\n3.Green\n");
printf("Enter your choice:\n");
scanf("%d",& ch);
switch(ch)
{
case 1:
printf("Red is favorite\n");
break;
case 2:
printf("Blue is favorite\n");
break;
case 3:
printf("Green is favorite\n");
break;
default:
printf("Black is favorite\n");
}
getch();
}
