#include <stdio.h>
#include <malloc.h>
// createing the structure of a node
struct node{int data;struct node*left;struct node*right;};
// creating a node
struct node* createNode(int data){
    struct node*n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
// inorder traversing
void inorder_traverse(struct node*root){
    if(root!=NULL){
        inorder_traverse(root->left);
        printf("%d",root->data);
        inorder_traverse(root->right);
    }
}
int main(){
    struct node*p=createNode(1);
    struct node*p1=createNode(2);
    struct node*p2=createNode(3);
    struct node*p3=createNode(4);
    struct node*p4=createNode(5);
    // linking the nodes
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    inorder_traverse(p);
    return 0;
}