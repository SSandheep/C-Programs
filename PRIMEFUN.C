#include<stdio.h>
#include<conio.h>
int Prime(int n)
{
int i=2,flag=1;
while(i<n)
{
if(n%i==0)
{
flag=0;
break;
}
i++;
}
return flag;
}
void main()
{
int n;
clrscr();
printf("Enter a no:\n");
scanf("%d",& n);
if(Prime(n))
printf("Prime Number\n");
else
printf("Not a Prime Number\n");
getch();
}

