#include <stdio.h> 
#include <stdlib.h>

struct Node { 
    int num; 
    struct Node *nextptr;
    
} *stnode;

void create_Node_List(int n);
void reverse_Dis_List();
void display_list();

void create_Node_List(int n){
    struct node *fnNode, *tmp;
    int num, i;
    
        
    stnode = (struct node *)malloc(sizeof(struct node));

        
    if(stnode == NULL) {
        printf(" Memory can not be allocated.");
    } 
    else {
        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        stnode->num = num;
        stnode->nextptr = NULL; 
        tmp = stnode;
    }

            
        for(i = 2; i <= n; i++) {
            fnNode = (struct node *)malloc(sizeof(struct node));

                
            if(fnNode == NULL) {
                printf(" Memory can not be allocated.");
                break;
            } 
            else {
                    
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);

                fnNode->num = num;      
                fnNode->nextptr = NULL; 

                tmp->nextptr = fnNode;  
                tmp = tmp->nextptr;     
            }
        }
        
}

void display_list(struct Node* node){
    while (node != NULL) {
        printf(" %d ", node->data);
        node = node->next;
    }
}

 

 int main(){
    int n;
    printf("\nLinked List : Create a single linked list and print it in reverse order ");
    printf("input the number of nodes : ");
    scanf("%d",&n);
    create_Node_List(n);
    printf("Data entered in the list are : ");
    display_list();
    return 0;
}
