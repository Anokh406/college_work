#include <stdio.h>
#include <malloc.h>
struct node{
    int data;
    struct node*left;
    struct node*right;
};
void post_order(struct node* root){
    if(root!=NULL){
        post_order(root->left);
        post_order(root->right);
        printf("%d",root->data);
    }
}
void in_order(struct node* root){
    if(root!=NULL){
        in_order(root->left);
        printf("%d",root->data);
        in_order(root->right);
    }
}
void pre_order(struct node* root){
    if(root!=NULL){
        printf("%d",root->data);
        pre_order(root->left);
        pre_order(root->right);
    }
}
struct node* createNode(int data){
    struct node*n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
int main(){
    struct node*p=createNode(5);
    struct node*p1=createNode(4);
    struct node*p2=createNode(3);
    struct node*p3=createNode(2);
    struct node*p4=createNode(1);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    // post_order(p);
    // in_order(p);
    pre_order(p);
    return 0;
}