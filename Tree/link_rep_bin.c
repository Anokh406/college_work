#include<stdio.h>
#include<malloc.h>
#include <stddef.h>
 struct node
 {
     int data;
     struct node*left;
     struct node*right;
     
 };
//  creating the node using function
 struct node* createNode(int data){
     struct node*n;
     n=(struct node *)malloc(sizeof(struct node));
     n->data=data;
     n->left=NULL;
     n->right=NULL;

     return n;

 }
 int main(){
    //  constructing  the root node using function
     struct node*p=createNode(54);
     struct node*p1=createNode(5);
     struct node*p2=createNode(4);
     struct node*p3=createNode(3);
     struct node*p4=createNode(2);
     struct node*p5=createNode(1);
     struct node*p6=createNode(10);
    //  linking the nodes first and second  using 
     p->left=p1;
     p->right=p2;
     
     return 0;

 }