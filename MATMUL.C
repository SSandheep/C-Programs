#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,r1,c1,r2,c2;
int a[5][5],b[5][5],c[5][5];clrscr();
printf("Enter the Rows and columns of matrix A:\n");
scanf("%d%d",&r1,&c1);
printf("Enter values of Matrix A:\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter the Rows and columns of matrix B:\n");
scanf("%d%d",&r2,&c2);
printf("Enter values of Matrix B:\n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&b[i][j]);
}
}
if(c1==r2)
{
printf("Multiply Matrices A and B\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
c[i][j]=0;
for(k=0;k<r2;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
printf("Matrix A:\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("Matrix B:\n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
printf("Matrix C:\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
}
else
{
printf("Can't Multiply these Matrices");
}
getch();
}

