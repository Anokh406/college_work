#include <stdio.h>
#include <malloc.h>
 struct node{
     int data;
     struct node*left;
     struct node*right;
 };
 struct node *createNode(int data){
     struct node*n;
     n=(struct node *)malloc(sizeof(struct node));
     n->data=data;
     n->left=NULL;
     n->right=NULL;
     return n;
 }
 void Inorder_traversal(struct node * root){
            if(root!=NULL){
        Inorder_traversal(root->left);
        printf("%d\n",root->data);
        Inorder_traversal(root->right);
            }
 }
 void pre_order_traversal(struct node * root){
            if(root!=NULL){
        printf("%d\n",root->data);
        pre_order_traversal(root->left);
        pre_order_traversal(root->right);
            }
 }
 void post_order_traversal(struct node * root){
            if(root!=NULL){
        post_order_traversal(root->left);
        post_order_traversal(root->right);
        printf("%d\n",root->data);
            }
 }
 struct node* search(struct node*root, int key){
     if(root==NULL){
         return NULL;
     }
     if(key==root->data){
         return root;
     }
     else if (key<root->data)
     {
         return search(root->left,key);
     }else{
         return search(root->right,key);
     }
 }
 int main(){
     struct node*p=createNode(5);
     struct node*p1=createNode(3);
     struct node*p2=createNode(6);
     struct node*p3=createNode(1);
     struct node*p4=createNode(4);
     p->left=p1;
     p->right=p2;
     p1->left=p3;
     p1->right=p4;
     Inorder_traversal(p);
     struct node * n =search(p,3);
     if(n!=NULL){
         printf("Element found: %d\n",n->data);
     }else{
         printf("Element not found\n");
     }
     return 0;
     


 }