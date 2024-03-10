//doubly linked list 
#include <stdio.h>
#include<stdlib.h>

//function declectration

void append();
void display();
int length();
void add_at_begin();
void add_at_end();
void addbefore();
void addafter();
void search_node();
void del_beginning();
void del_end();
void del_before();
void del_node();
void del_after();
void reverse();

//node structure (universal)
struct node{
    int data;
    struct node *next;
    struct node *prevs;
};struct node *root=NULL;

//main function

void main()
{ int c;
    do{
    printf("\n");
    printf("\t\tCHOICE OF OPERATION\n");
    printf("\n");
    printf("1- To append\n");
    printf("2- To display the data from linked list\n");
    printf("3- For lenght of the linked list\n");
    printf("4- Add node at the beginning\n");
    printf("5- Add node at the end\n");
    printf("6- Add node before the desired node\n");
    printf("7- Add node after the desired node\n");
    printf("8- Searching the data in linked\n");
    printf("9- Delete the node form beginning\n");
    printf("10- Delete node from end\n");
    printf("11- Delete the node before desired node\n");
    printf("12- Delete the node from specific location\n");
    printf("13- Delete the node after the desired node\n");
    printf("14- Reverse the linked list\n");
    printf("15- exit\n");
    printf("Enter your coice : ");
    scanf("%d",&c);
    printf("\n");
    
        switch(c){
        case 1:
        int n;
        printf("Enter the number of nodes : \n");
        scanf("%d",&n);
          for(int i=0; i<n; i++){
            append();
           }
          break;
        case 2:
         display();
         break;
        case 3:
         length();
         break;
        case 4: 
         add_at_begin();
         break;
        case 5:
         add_at_end();
         break;
        case 6:
         addbefore();
         break;
        case 7:
         addafter();
         break;
        case 8:
         search_node();
         break;
        case 9:
         del_beginning();
         break;
        case 10:
         del_end();
         break;
        case 11:
         del_before();
         break;
        case 12:
         del_node();
         break;
        case 13:
         del_after();
         break;
        case 14:
         reverse();
         break;
        case 15:
         break;
        default:
        printf("please enter valid data!\n");
    }}
    while(c!=15);

}

//function defention

//to create  linked list (append any node at the end )
void append(){
struct node*temp=(struct node*)malloc(sizeof(struct node));
printf("Enter the data in node :");
scanf("%d",&temp->data);
temp->next=NULL;
temp->prevs=NULL;
//checking weather any linked list is present or not
if(root==NULL){
    root=temp;
}
else{
        struct node*p=root;
    while(p->next!=NULL){
        p=p->next;
        }
        p->next=temp;
        temp->prevs=p;

}
}

//for displaying the data o f linked list 
void display(){
    struct node*p=root;
    while(p!=NULL){
        printf("%d ",p->data);
        printf("--> ");
        p=p->next;
        }
}

//to find the length of linked list 
int length(){
    struct node*p=root;
    int count=0;
    while(p!=NULL){
        count++;
        p=p->next;
    }printf("%d",count);
    return count;
}

//aaa new node at beginning of the linked list
void add_at_begin(){
    struct node*p=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data of new node for beginning : \n");
    scanf("%d",&p->data);
    root->prevs=p;
    p->next=root;
    p->prevs=NULL;
    root=p;
   printf("the list after deletion is:");
    display();
    
}

//adding new node at the end of the linked list 
void add_at_end(){
    struct node*end=(struct node*)malloc(sizeof(struct node));
    struct node*p=root;
    printf("\nEnter the data of new node for end : \n");
    scanf("%d",&end->data);
    end->next=NULL;
    if(root==NULL){
        root=end;
    }
    else{
    while(p->next!=NULL){
        p=p->next;
    }
    }
    p->next=end;
    end->prevs=p;
    printf("the list after deletion is:");
    display();
    
}

//adding a new node before a desired location
void addbefore(){
    int k,i=1;
    int loc=length();
    printf("\nEnter the location before you want to insert the new node :\n");
    scanf("%d",&k);
    if(k>loc){
        printf("The size of the list is smaller than the required size \n");
    }
    else{
        struct node*b=(struct node*)malloc(sizeof(struct node));
        struct node*p=root;
        printf("Enter the data of node for before insertion operation :\n");
        scanf("%d",&b->data);
        while(i<k-1){
           p=p->next;
            i++;
        }
        p->next->prevs=b;
        b->next=p->next;
        p->next=b;
        b->prevs=p;
    
    printf("the list after deletion is:");
    display();
    
    }
}

//adding new node after a desire postion 
void addafter(){
    int k,i=1;
    int loc=length();
    printf("\nEnter the location after you want to insert the new node :\n");
    scanf("%d",&k);
    if(k>loc){
        printf("List size is smaller than the addition node position \n");
    }
    else{
        struct node*b=(struct node*)malloc(sizeof(struct node));
        struct node*p=root;
        printf("Enter the data of node for after insertion operation :\n");
        scanf("%d",&b->data);
        while(i<k){
           p=p->next;
            i++;
        }
        b->next=p->next;
        p->next->prevs=b;
        p->next=b;
        b->prevs=p;
    
    printf("the list after deletion is:");
    display();
    
    }
}

//searching any data in linked list 
void search_node(){
    struct node*p=(struct node*)malloc(sizeof(struct node));
    p=root;
    int i,x,j=1,a=0;
    printf("Enter the number you want to search :\n");
    scanf("%d",&x);
    while(p->next!=NULL){
        if(p->data==x){
            printf("Element is found at %d location node\n",j);
            a=1;
        }
        j++;
        p=p->next;
    }
    if(x==p->data){
        printf("Element is found at %d location node\n",length());
        a=1;
    }
    if(a==0){
        printf("Element is not found\n");
    }
    
}

//deleting data form begninning
void del_beginning(){
    struct node*temp=root;
    root=root->next;
    root->prevs=NULL;
    temp->next=NULL;
    free(temp);
    
    printf("the list after deletion is:");
    display();
}

//deleting data form end of the list
void del_end() {
    if (root == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct node *temp;
    struct node *p = root;
    while (p->next != NULL) {
        temp = p;
        p = p->next;
    }

    // If there is only one node in the list
    if (temp == NULL) {
        root = NULL;
    } else {
        temp->next = NULL;
    }

    free(p);

    printf("The list after deletion is:\n");
    display();
}

//deleting data before a desire postion 
void del_before() {
    struct node *temp;
    struct node *p = root;
    int i, a, x = 1;
    int loc = length();
    
    printf("Enter the node before which you want to delete the node: ");
    scanf("%d", &a);
    
    if (a >= loc || a < 2) {
        printf("Invalid position.\n");
        return;
    }
    while (x < a) { 
        temp = p;
        p = p->next;
        x++; 
    }
    temp->prevs->next = p;
    if (p != NULL) {
        p->prevs = temp->prevs;
    }
    temp->prevs = NULL;
    temp->next = NULL;
    free(temp);

    printf("The list after deletion is:\n");
    display();
}

//deleting a specific node form linked list
void del_node() {
    struct node *temp;
    struct node *p = root;
    int a, x = 1; 
    int loc = length();
    
    printf("Enter the position of the node you want to delete: ");
    scanf("%d", &a);
    
    if (a >= loc || a < 1) {
        printf("Invalid position.\n");
        return;
    }
    if (a == 1) {
        del_beginning();
        return;
    }
    while (x < a) { 
        temp = p;
        p = p->next;
        x++; 
    }
    temp->next = p->next;
    if (p->next != NULL) {
        p->next->prevs = temp;
    }
    p->next = NULL;
    p->prevs = NULL;
    free(p);

    printf("The list after deletion is:\n");
    display();
}


//deleting node after a desire position
void del_after() {
    struct node *temp;
    struct node *p = root;
    int a, x = 1; 
    int loc = length();
    
    printf("Enter the position after which you want to delete the node: ");
    scanf("%d", &a);
    
    if (a >= loc || a < 1) {
        printf("Invalid position.\n");
        return;
    }
    while (x < a) { 
        p = p->next;
        x++; 
    }
    temp = p->next;
    p->next = temp->next;
    if (temp->next != NULL) {
        temp->next->prevs = p;
    }
    temp->prevs = NULL;
    temp->next = NULL;
    free(temp);

    printf("The list after deletion is:\n");
    display();
}

//reverse the list 
void reverse() {
    struct node *p = root;
    struct node *q = NULL;
    int len = length();
    int i = 0;
    while (p->next != NULL) {
        q = p;
        p = p->next;
    }
    p = root;
    while (i < len / 2) {
        int temp = p->data;
        p->data = q->data;
        q->data = temp;
        p = p->next;
        q = q->prevs;
        i++;
    }
    printf("The list after reversal is:\n");
    display();
}


    
   
