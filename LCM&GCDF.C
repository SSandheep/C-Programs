#include<stdio.h>
#include<conio.h>
int GCD(int a,int b)
{
int i,small,gcd;
if(a<b)
small=a;
else
small=b;
for(i=1;i<=small;i++)
{
if(a%i==0 && b%i==0)
{
gcd=i;
}
}
return gcd;
}
int LCM(int a,int b)
{
int j,lim,lcm;
lim=a*b;
for(j=1;j<=lim;j++)
{
if(j%a==0 && j%b==0)
{
lcm=j;
break;
}
}
return lcm;
}
void main()
{
int x,y;
clrscr();
printf("Enter 2 nos:\n");
scanf("%d%d",&x,&y);
printf("GCD of %d and %d is :%d\n",x,y,GCD(x,y));
printf("LCM of %d and %d is :%d\n",x,y,LCM(x,y));
getch();
}
