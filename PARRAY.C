#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct Student
{
int Rollno;
char name[25];
char degree[25];
float cgpa;
}Stud;
void display(Stud *a1)
{
printf("Rollno:\t%d\n",a1->Rollno);
printf("Name:\t%s\n",a1->name);
printf("Degree:\t%s\n",a1->degree);
printf("CGPA:\t%.2f\n",a1->cgpa);
printf("-----------------------------\n");
}
void main()
{
Stud *s1,*s2;
clrscr();
s1=(Stud *)malloc(sizeof(Stud));
s2=(Stud *)malloc(sizeof(Stud));
printf("Enter the details of student1:\n");
scanf("%d%s%s%f",&s1->Rollno,s1->name,s1->degree,&s1->cgpa);
printf("Enter the details of student2:\n");
scanf("%d%s%s%f",&s2->Rollno,s2->name,s2->degree,&s2->cgpa);
display(s1);
display(s2);
getch();
}
void fun ()
{
float a=0;
float *p=&a;
a=*p;
}



