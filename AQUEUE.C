#include<stdio.h>
#include<conio.h>
int queue[5];
int rear=-1;
int front=-1;
int n=5;
int ch,x,val,i;
void enqueue();
void dequeue();
void display();
void search();
int main()
{
do
{
printf("\nEnter choice:\n1.Enqueue\n2.Dequeue\n3.Display\n4.Search\n");
scanf("\n%d",&ch);
switch(ch)
{
case 1:
	enqueue();
	break;
case 2:
	dequeue();
	break;
case 3:
	display();
	break;
case 4:
	search();
	break;
case 5:
	printf("\nExit");
	break;
default:
	printf("Please enter valid choice");
	break;
}
}
while(ch!=6);
return 0;
}
void enqueue()
{
if(rear>=n-1)
{
printf("\nOverflow");
}
else if(rear==-1 && front==-1)
{

printf("Enter the element to be the inserted:");
scanf("\n%d",&x);
rear=front=0;
queue[rear]=x;
}
else
{

printf("Enter the element to be the inserted:");
scanf("\n%d",&x);
rear=rear+1;
queue[rear]=x;
}
printf("\nThe element inserted in the queue :%d\n",queue[rear]=x);
display();
}
void dequeue()
{
if(rear==-1&&front==-1)
{
printf("\nUnderflow");
}
else if(front>rear)
{
printf("Underflow\n");
}
else
{
printf("\nThe element deleted is :%d\n",queue[front]);
front=front+1;
display();
}
}
void display()
{
if(rear==-1&&front==-1)
{
printf("\nThe queue is empty");
}
else
{
printf("\nThe elements in the queue are:\n");
for(i=front;i<=rear;i++)
{
printf("%d\n",queue[i]);
}
}
}
void search()
{
int flag=0;
if(rear==-1&&front==-1)
printf("\nThe queue is empty");
else
{
printf("\nEnter the value to be searched:");
scanf("\n%d",&val);
for(i=front;i<=rear;i++)
{
if(val==queue[i])
{
printf("\nElement is found");
flag=1;
break;
}
}
if(flag==0)
printf("\nElement not found");
}
}






