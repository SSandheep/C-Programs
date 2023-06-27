#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name1[50],name2[50];
int n;
clrscr();
printf("Enter a name:\n");
scanf("%s",name1);
strcpy(name2,name1);
n=strlen(name1);
printf("Name1:%s\n",name1);
printf("Nmae2:%s\n",name2);
printf("length:%d\n",n);
printf("Uppercase:%s\n",strupr(name1));
printf("lowercase:%s\n",strlwr(name1));
printf("Reverse:%s\n",strrev(name1));
getch();
}
