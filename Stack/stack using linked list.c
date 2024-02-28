#include<stdio.h>
#include<stdlib.h>

void display();
void push();
void pop();

struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;

void push(int val){
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=head;
    head=newnode;
}
void pop(){
    if (head==NULL){
        printf("List is empty, cannot pop");
        return;
    }
    struct node *temp=head;
    head=head->next;
    free(temp);
}

int main(){
    struct Node* head=NULL
    push(10);
    push(15);
    push(25);
    pop();
    printf("\nAfter popping the first element : \n");
    display(head);
}

void display(struct Node* node){
    // struct node *temp=head;
    while(node !=NULL){
        printf("%d\n",node->data);
        temp=node->next;
    }
    printf("NULL");
}
