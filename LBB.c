#include<stdio.h>
#include<stdlib.h>
int a[10],ch,val,search,i;
int n=10;
void LinearSearch(int a[],int n);
int BinarySearch(int a[],int n);
void BubbleSort(int a[],int n);
void display(int a[],int n);
void main()
{
printf("\nThe Size of the Array is %d",n);
printf("\nEnter elements in the Array are:");
for(i=0;i<=n;i++)
{
scanf("\n%d",&a[i]);
}
printf("\n1.Linear Search\n2.Binary Search\n3.Bubble Sort\n");
do
{
printf("\nEnter choice:\n");
scanf("\n%d",&ch);
switch(ch)
{
case 1:
{
LinearSearch(a,n);
break;
}
case 2:
{
BinarySearch(a,n);
break;
}
case 3:
{
BubbleSort(a,n);
break;
}
case 4:
{
printf("Exit");
break;
}
default:
{
printf("Enter valid choice:");
break;
}
}
}
while(ch!=5);
}
void display(int a[],int n)
{
printf("The elements in the Array are:");
for(i=0;i<=n;i++)
{
printf("%d\n",a[i]);
}
}
void LinearSearch(int a[],int n)
{
int val;
int flag=0;
printf("\nEnter the value to be searched:");
scanf("\n%d",&val);
for(i=0;i<=n;i++)
{
if(val==a[i])
{
printf("\nElement is found");
flag=1;
break;
}
}
if(flag==0)
{
printf("\nElement not found");
}
} 
int BinarySearch(int a[],int n)
{
int search,i,first,last,mid;
printf("Enter value for search:");
scanf("\n%d",&search);
first=0;
last=n-1;
mid=(first+last)/2;
while(first<=last)
{
if(search>a[mid])
{
first=mid+1;
mid=(first+last)/2;
last=n-1;
}
else if(search==a[mid])
{
printf("Element found");
return 0;
}
else{
first=0;
last=mid-1;
mid=(first+last)/2;
}
}
if(first>last)
printf("Element not found");
}
void BubbleSort(int a[],int n)
{
int i,j,temp;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;i++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
display(a,n);
}