#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* newnode(int value){
    struct node* node=(struct node*)malloc(sizeof(struct node));
    if (node !=NULL){
        node->data=value;
        node->left=NULL;
        node->right=NULL;
    }
   
    return (node);
}


struct node* insert(struct node* root,int value){
    if (root == NULL){
        return newnode(value);
    }
    if(value < root->data){
        root->left = insert(root->left,value);
    }
    else if (value > root->data){
        root->right=insert(root->right,value);
    }
    return root;
}

void printinorder(struct node* node){
    if (node!=NULL){
        printinorder(node->left);
        printf("%d\t",node->data);
        printinorder(node->right);
    }    
}

void freetree(struct node* node){
    if(node!=NULL){
        freetree(node->left);
        freetree(node->right);
        free(node);
    }
}


int main(){
    struct node* root = NULL;
    int value,n;
    printf("Enter the number of nodes to insert : ");
    scanf("%d",&n);
    
    for (int i=0;i<n;i++){
        printf("Input a value to insert into the binary tree : ");
        scanf ("%d",&value);

        root=insert(root,value);

    }

    printf("\nIn-order traversal of the binary tree : ");
    printinorder(root);
    printf("\n");

    freetree(root);

    return 0;
}