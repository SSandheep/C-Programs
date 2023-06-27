#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,total=0;
clrscr();
printf("\nEnter number:\n");
scanf("%d",& n);
for(i=1;i<=n;i++)
{
total=total+i;
}
printf("Sum of %d natural nos is:%d\n",n,total);
getch();
}
