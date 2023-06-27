#include<stdio.h>
#include<stdlib.h>
int *h,*t,tsize,lof=0;
void hashr(int v);
void rehash();
struct node{
int data;
struct node *next;
};
struct node *head[10]={NULL},*c;
void insert(int key){
int i;
i=key%tsize;
struct node * newnode=(struct node *)malloc(sizeof(struct node));
newnode->data=key;
newnode->next = NULL;
if(head[i] == NULL)
head[i] = newnode;
else{
c=head[i];
while(c->next != NULL){
c=c->next;
}
c->next=newnode;
}
}
int prime(int k){
int i,num=0,j,f=0;
for(i=k;i<100;i++){
f=0;
for(j=2;j<=i/2;j++)
if(i%j==0){
f=1;
break;
}
if(f==0)
break;
}
return i;
}
void hashr(int v){
int index;
if(lof==tsize/2){
rehash();
}
index=v%tsize;
if(h[index]!=-1){
while(h[(index=index%tsize)]!=-1)
index++;
}
h[index]=v;
lof++;
}
void fill(int n){
int i;
h=(int*)malloc(2*n);
for(i=0;i<n;i++)
h[i]=-1;
}
void rehash(){
int temp,i;
printf("\nrehashing");
temp=tsize;
t=(int *)malloc(tsize*2);
for(i=0;i<tsize;i++)
t[i]=h[i];
tsize=prime(tsize*2);
fill(tsize);
lof=0;
for(i=0;i<temp;i++){
if(t[i]!=-1)
hashr(t[i]);
}
}
int hasht(int key){
int i ;
i = key%tsize ;
return i;
}
int rehashd(int key){
int index,i,flag=0,hkey,hash2;
hkey=key%tsize;
hash2 = 7-(key %7);
for(i=0;i<tsize;i++) {
index=(hkey+i*hash2)%tsize;
}
return index;
}
int rehashl(int key){
int i ;
i = (key+1)%tsize ;
return i ;
}
int rehashq(int key, int j){
int i ;
i = (key+(j*j))%tsize ;
return i ;
}
void main(){
int key,arr[20],hash[20],i,n,s,op,j,k ;
printf ("Enter the size of the hash table: ");
scanf ("%d",&tsize);
printf ("\nEnter the number of elements: ");
scanf ("%d",&n);
for (i=0;i<tsize;i++)
hash[i]=-1 ;
printf ("Enter Elements: ");
for (i=0;i<n;i++){
scanf("%d",&arr[i]);
}
do{
printf("\n\n1.Linear Probing\n2.Quadratic Probing \n3.Double Hashing\n4.Rehashing\n5.Separate
chaining\n6.Exit\nEnter your option: ");
scanf("%d",&op);
switch(op){
case 1:
for (i=0;i<tsize;i++)
hash[i]=-1 ;
for(k=0;k<n;k++){
key=arr[k] ;
i = hasht(key);
while (hash[i]!=-1){
i = rehashl(i);
}
hash[i]=key ;
}
printf("\nThe elements in the array are: ");
for (i=0;i<tsize;i++){
printf("\n Element at position %d: %d",i,hash[i]);
}
break ;
case 2:
for (i=0;i<tsize;i++)
hash[i]=-1 ;
for(k=0;k<n;k++){
j=1;
key=arr[k] ;
i = hasht(key);
while (hash[i]!=-1){
i = rehashq(i,j);
j++ ;
}
hash[i]=key ;
}
printf("\nThe elements in the array are: ");
for (i=0;i<tsize;i++){
printf("\n Element at position %d: %d",i,hash[i]);
}
break ;
case 3:
for (i=0;i<tsize;i++)
hash[i]=-1 ;
for(k=0;k<n;k++){
key=arr[k] ;
i = hasht(key);
while (hash[i]!=-1){
i = rehashd(i);
}
hash[i]=key ;
}
printf("\nThe elements in the array are: ");
for (i=0;i<tsize;i++){
printf("\n Element at position %d: %d",i,hash[i]);
}
break ;
case 4:
h=(int*)malloc(2*tsize);
for(i=0;i<tsize;i++)
h[i]=-1;
for(i=0;i<n;i++){
int key=arr[i];
hashr(key);
}
printf("\nThe elements in the array are: ");
for (i=0;i<tsize;i++){
printf("\n Element at position %d: %d",i,h[i]);
}
break;
case 5:
for(i=0;i<n;i++){
int key=arr[i];
insert(key);
}
printf("\nThe elements in the array are: ");
for(i=0;i<tsize;i++){
printf("\nentries at index %d\n",i);
if(head[i] == NULL){
printf("No Hash Entry");
}
else{
for(c=head[i];c!=NULL;c=c->next)
printf("%d->",c->data);
}
}
break;
}
}while(op!=5);
}

