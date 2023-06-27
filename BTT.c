#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *left, *right;
};
struct node *root;
struct node *create(){
struct node *temp;
int data,choice;
temp = (struct node *)malloc(sizeof(struct node));
printf("\nPress 0 to exit / 1 for new node:");
printf("\nEnter your choice : ");
scanf("%d", &choice);
if(choice==0)
{
return 0;
}
else{
printf("Enter the data:");
scanf("%d", &data);
temp->data = data;
printf("Enter the left child of %d", data);
temp->left = create();
printf("Enter the right child of %d", data);
temp->right = create();
return temp;
}
}
void pre_order_traversal(struct node* root) {
if(root != NULL) {
printf("%d ",root->data);
pre_order_traversal(root->left);
pre_order_traversal(root->right);
}
}
void inorder_traversal(struct node* root) {
if(root != NULL) {
inorder_traversal(root->left);
printf("%d ",root->data);
inorder_traversal(root->right);
}
}
void post_order_traversal(struct node* root) {
if(root != NULL) {
post_order_traversal(root->left);
post_order_traversal(root->right);
printf("%d ", root->data);
}
}
void main(){
root = create();
printf("\nPreorder traversal: ");
pre_order_traversal(root);
printf("\nInorder traversal: ");
inorder_traversal(root);
printf("\nPost order traversal: ");
post_order_traversal(root);
printf("\n");
}