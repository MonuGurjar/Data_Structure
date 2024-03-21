#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* newnode(int data){
    struct node* node=(struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return (node);
}

void printinorder(struct node* node){
    if (node==NULL){
        return;
    }
    printinorder(node->left);
    printf("%d",node->data);
    printf("\t");
    printinorder(node->right);
    
}

int main(){
    struct node* root = newnode(4);
    root->left=newnode(2);
    root->right=newnode(5);
    root->right->left=newnode(6);
    root->left->left=newnode(8);
    root->left->right=newnode(10);
    root->left->left->left=newnode(7);
    root->left->left->right=newnode(9);
    root->left->left->left->left=newnode(3);
    root->left->left->left->right=newnode(1); 
    printf("\nInorder traversal of binary tree is \n");
    printinorder(root);
    return 0;
}