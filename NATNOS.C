#include<stdio.h>
#include<conio.h>
void natnos(int n)
{
if(n)
natnos(n-1);
else
return;
printf("%d\n",n);
}
void main()
{
int lim;
clrscr();
printf("Enter the limit:\n");
scanf("%d",& lim);
printf("Natural nos are:\n");
natnos(lim);
getch();
}




