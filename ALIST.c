#include<stdio.h>
#include<stdlib.h>
int b[10];
int l=0;
int n=10;
int isempty();
int isfull();
void insert();
void deletion();
void search();
void display();
void main()
{
int ch;
do
{
printf("\n 1.isfull \n 2.isempty \n 3.Insert \n 4.Delete \n 5.Display\n 6.Search\n 7.Exit\n");
printf("\nEnter your Choice : ");
printf("\n");
scanf("%d", &ch);
switch(ch)
{
case 1:isfull();break;
case 2:isempty();break;
case 3:insert();break;
case 4:deletion();break;
case 5:display();break;
case 6:search();break;
case 7:printf("Exit");break;
default:
printf("\n Enter the correct choice: ");
break;
}
}
while(ch!=8);
}
int isfull()
{
if(l==n)
{
printf("It is full\n");
return 1;
}
else
{
printf("It is not full\n");
return 0;
}
}
int isempty()
{
if(l==0)
{
printf("It is empty\n");
return 1;
}
else
{
printf("It is not empty\n");
return 0;
}
}
void insert()
{
int pos,p,i,r;
r=isfull();
if(r==0)
{
printf("Enter the position u need to insert:");
scanf("%d", &pos);
if(pos>=n || pos<0)
{
printf("invalid Location\n");
}
else if(b[pos]==0)
{
printf("\nEnter the element to insert:");
scanf("%d",&p);
b[pos]=p;
l++;
}
else{
for(i=n-1;i>=pos-1;i--)
{
b[i+1]=b[i];
}
printf("\nEnter the element to insert:");
scanf("%d",&p);
b[pos]=p;
l++;
}
printf("\nThe list after insertion::\n");
display();
}
}
void deletion(){
int pos,i,r;
r=isempty();
if(r==0)
{
printf("Enter the position u want to delete::");
scanf("%d", &pos);
if(pos>=n || pos<0)
{
printf("Invalid Location\n");
}
else
{
for(i=pos+1;i<n;i++){
b[i-1]=b[i];
}
l--;
}
printf("The Elements after deletion");
for(i=0;i<n;i++){
printf("\t%d", b[i]);
}
}
}
void display(){
int i;
printf("\nThe Elements of The list ADT are:");
for(i=0;i<n;i++){
printf("%d ", b[i]);
}
}
void search()
{
int flag=0;
int e,i;
printf("Enter the Element to be searched:");
scanf("%d", &e);
for(i=0;i<n;i++)
{
if(b[i]==e)
{
flag=1;
printf("Value is in the %d Position", i);
break;
}
}
if(flag==0)
{
printf("Value is not in the array");
}
}