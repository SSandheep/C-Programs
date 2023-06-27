#include<stdio.h>
#include<conio.h>
int stack[10],choice,x,i,val;
int top=-1;
int n=5;
void push();
void pop();
void peek();
void display();
void search();
int main()
{
printf("\n\tSTACK OPERATIONS USING ARRAY");
printf("\n\t-------------------");
printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.PEEK \n\t 4.DISPLAY\n\t 5.SEARCH\n\t6.EXIT");
do
{
printf("\n Enter the Choice:");
scanf("\n%d",&choice);
switch(choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
peek();
break;
}
case 4:
{
display();
break;
}
case 5:
{
search();
break;
}
case 6:
{
printf("\n\tEXIT POINT ");
break;
}
default:
{
printf ("\n\t Please Enter a Valid Choice(1/2/3/4/5/6)");
break;
}
}
}
while(choice!=7);
return 0;
}
void push()
{
if(top>=n-1)
{
printf("\n\tStack is over flow");
}
else
{
printf("\nEnter a value to be pushed:");
scanf("\n%d",&x);
top=top+1;
stack[top]=x;
display();
}
}
void pop()
{
if(top<=-1)
{
printf("\n\tStack is under flow");
}
else
{
printf("\n\tThe popped element is %d",stack[top]);
top=top-1;
display();
}
}
void peek()
{
if(top==-1)
{
printf("\n\t stack is underflow\n");
}
else
{
printf("\nThe top value is %d\n",stack[top]);
}
}
void display()
{
if(top==-1)
{
printf("\nThe stack is empty\n");
}
else
{
printf("\nThe elements in the stack are:\n");
for(i=top;i>=0;i--)
{
printf("\n%d",stack[i]);
}
}
}
void search()
{
int flag=0;
if(top==-1)
printf("\nThe stack is empty\n");
else
{
printf("\nEnter the value to be searched:\n");
scanf("\n%d",&val);
for(i=0;i<=top;i++)
{
if(val==stack[i])
{
printf("\nElement is found\n");
flag=1;
break;
}
}
if(flag==0)
{
printf("\nElement not found\n");
}
}
}