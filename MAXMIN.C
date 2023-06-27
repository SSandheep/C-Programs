#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,a[20],max,min;
clrscr();
printf("Enter the no. of elements to be entered in the array:\n");
scanf("%d",& n);
printf("Enter elements of Array:\n");
for(i=0;i<n;i++)
{
scanf("%d",& a[i]);
}
for(i=0;i<n;i++)
{max=min=a[0];
if(a[i]<min)
{
min=a[i];
}
if(a[i]>max)
{
max=a[i];
}
}
printf("Maximum:%d\n",max);
printf("Minimum:%d\n",min);
getch();
}
