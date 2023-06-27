#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float p,n,r;
float SI,CI;
clrscr();
printf("Enter Principal amount :\n");
scanf("%f",&p);
printf("Enter no.of years :\n");
scanf("%f",&n);
printf("Enter rate of interest:\n");
scanf("%f",&r);
SI=p*n*r/100;
CI=(p*pow((1+r/100),n))-p;
printf("Simple interest is:%.2f\n",SI);
printf("Compound interest is:%.2f\n",CI);
getch();
}
