#include<stdio.h>
#include<conio.h>
typedef struct Student
{
int Rollno;
char name[25];
char degree[25];
float cgpa;
}Stud;
void display(Stud a1)
{
printf("Rollno:\t%d\n",a1.Rollno);
printf("Name:\t%s\n",a1.name);
printf("Degree:\t%s\n",a1.degree);
printf("CGPA:\t%.2f\n",a1.cgpa);
printf("-----------------------------\n");
}
void main()
{
int n,i;
Stud st[25];
clrscr();
printf("Enter the no. of students :\n");
scanf("%d",& n);
for(i=0;i<n;i++)
{
printf("Enter the details of student %d:\n",(i+1));
scanf("%d%s%s%f",&st[i].Rollno,st[i].name,st[i].degree,&st[i].cgpa);
}
for(i=0;i<n;i++)
{
display(st[i]);
}
getch();
}
void fun()    //Emulator function
{
float a=0;
float *p=&a;
a=*p;
}



