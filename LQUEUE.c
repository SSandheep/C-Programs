#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
void search();
struct node
{
int data;
struct node*next;
};
struct node*rear=NULL,*front=NULL;
struct node*newnode,*tempnode;
void main()
{
int ch;
printf("\nQueue Operations are:\n");
printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Search\n5.Exit\n");
do
{
printf("\nEnter Choice:\n");
scanf("\n%d",&ch);
switch(ch)
{
case 1:
{
enqueue();
break;
}
case 2:
{
dequeue();
break;
}
case 3:
{
display();
break;
}
case 4:
{
search();
break;
}
case 5:
{
printf("\nEXIT POINT\n");
break;
}
default:
{
printf("\nPlease enter valid choice\n");
break;
}
}
}
while(ch!=6);
}
void enqueue()
{
int data;
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the element  to be inserted:\n");
scanf("\n%d",&data);
newnode->data=data;
if(rear==NULL&&front==NULL)
{
newnode->next=NULL;
rear=front=newnode;
display();
}
else
{
rear->next=newnode;
newnode->next=NULL;
rear=newnode;
display();
}
}
void dequeue()
{
if(rear==NULL&&front==NULL)
{
printf("\nQueue is empty\n");
}
else
{
tempnode=front;
front=front->next;
free(tempnode);
printf("\nThe element is deleted");
display();
}
}
void display()
{
tempnode=front;
if(rear==NULL&&front==NULL)
{
printf("\nQueue is Empty");
}
else
{
printf("\nThe elements in the queue are:\n");
while(tempnode!=NULL)
{
printf("%d\n",tempnode->data);
tempnode=tempnode->next;
}
}
}
void search()
{
int flag=0;
int val;
printf("\nEnter the value to be searched:\n");
scanf("\n%d",& val);
tempnode=front;
while(tempnode!=NULL)
{
if(tempnode->data==val)
{
printf("\nElement is found\n");
flag=1;
break;
}
tempnode=tempnode->next;
}
if(flag==0)
printf("\nElement not found\n");
}

