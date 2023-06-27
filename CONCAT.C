#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,j;
char n1[50],n2[50],n3[30];
clrscr();
printf("Enter the String:\n");
scanf("%s",& n1);
printf("Enter the String:\n");
scanf("%s",& n2);
i=0;
while(n1[i]!='\0')
{
n3[i]=n1[i];
i++;
}
j=0;
while(n2[j]!='\0')
{
n3[i]=n2[j];
j++;
i++ ;
}
n3[i]='\0';
printf("string n1 is:%s\n",n1);
printf("string n2 is :%s\n",n2);
printf("Concatenated string is %s\n",n3);
printf("%d",i);
getch();
}
