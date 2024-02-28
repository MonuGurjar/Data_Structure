#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};


void insertionAtBegin(struct Node** head, int new_data) {
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    new->data = new_data;
    new->next = (*head);
    (*head) = new;
}


// void insertionAtEnd(struct Node** head, int new_data) {
//     struct Node* new = (struct Node*)malloc(sizeof(struct Node));
//     struct Node* lastnode = *head;
//     new->data = new_data;
//     new->next = NULL;
//     if (*head == NULL) {
//         *head = new;
//         return;
//     }
//     while (lastnode->next != NULL) lastnode = lastnode->next;
//         lastnode->next = new;
//         return;
// }


// void insertionAfternode(struct Node* prev_node, int new_data) {
//     if (prev_node == NULL) {
//         printf("the given previous node cannot be NULL");
//         return;
//     }
//     struct Node* new = (struct Node*)malloc(sizeof(struct Node));
//     new->data = new_data;
//     new->next = prev_node->next;
//     prev_node->next = new;
// }


void display(struct Node* node){
    while (node != NULL) {
        printf(" %d ", node->data);
        node = node->next;
    }
}


// int reverse_display(){
//     struct node *prev,*cus;
    
// }



int main(){
    struct Node* head = NULL;
    // insertionAtEnd(&head, 11);
    insertionAtBegin(&head, 30);
    insertionAtBegin(&head, 20);
    insertionAtBegin(&head, 10);
    // insertionAtEnd(&head, 44);
    // insertionAfternode(head->next, 15);
    printf("Linked list elements are: ");
    display(head);
}



