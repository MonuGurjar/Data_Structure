//singly linked list all operations
#include <stdio.h>
#include<stdlib.h>
//function decleration

void append();
void display();
int length();
void add_at_begin();
void add_at_end();
void addbefore();
void addafter();
void search_node();
void delete_before();
void delete_node();
void delete_after();
void reverse();

struct node{
    int data;
    struct node *next;
};struct node *root=NULL;

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
    printf("6- Add node before the desired input\n");
    printf("7- Add node after the desired input\n");
    printf("8- Searching the data in node\n");
    printf("9- Delete the node before desired input\n");
    printf("10- Delete the node from specific location\n");
    printf("11- Delete the node after the desired input\n");
    printf("12- Reverse the linked list\n");
    printf("13- exit");
    printf("Enter your coice : ");
    scanf("%d",&c);
    printf("\n");
    
    //function calling
    
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
         delete_before();
         break;
        case 10:
         delete_node();
         break;
        case 11:
         delete_after();
         break;
        case 12:
         reverse();
         break;
        case 13:
         break;
        default:
        printf("please enter valid data!\n");
    }}
    while(c!=13);

}

//function definition

void append(){
struct node*temp=(struct node*)malloc(sizeof(struct node));
printf("Enter the data in node :");
scanf("%d",&temp->data);
temp->next=NULL;
if(root==NULL){
    root=temp;
}
else{
        struct node*p=root;
    while(p->next!=NULL){
        p=p->next;
        }
        p->next=temp;

}
}
void display(){
    struct node*p=root;
    while(p!=NULL){
        printf("%d\t",p->data);
        p=p->next;
        }
}
int length(){
    struct node*p=root;
    int count=0;
    while(p!=NULL){
        count++;
        p=p->next;
    }printf("%d",count);
    return count;
}
void add_at_begin(){
    struct node*p=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data of new node for beginning : \n");
    scanf("%d",&p->data);
    p->next=root;
    root=p;
    printf("The new list after addition at beginning :\n");
    display();
}
void add_at_end(){
    struct node*end=(struct node*)malloc(sizeof(struct node));
    struct node*p=root;
    printf("\nEnter the data of new node for end : \n");
    scanf("%d",&end->data);
    end->next=NULL;
    if(root==NULL){
        root=end;
    }
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=end;
    printf("The new list after addition at end :\n");
    display();
}
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
        b->next=p->next;
        p->next=b;
    
    display();
    }
}
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
        p->next=b;
    
    display();
    }
}
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
void delete_before(){ 
    struct node*p=root;
    struct node*temp=root;
    int i,x,j=1;
    i=length();
    printf("Enter the location of node before you want to delete node :\n");
    scanf("%d",&x);
    if(x>i||x<=1){
        printf("List size is smaller than the input location or can't be deleted before first node\n");
    }
    else{
    while(j<x-2){
        temp=p;
        p=p->next;
        j++;
    } 
    temp=temp->next;
    temp=temp->next;
    if(temp->next!=NULL){
        p->next=temp->next;
    }
    else{
        p->next=NULL;
    }
    display();
}
}
void delete_node(){ 
    struct node*p=root;
    struct node*temp=root;
    int i,x,j=1;
    i=length();
    printf("Enter the location of node you want to delete :\n");
    scanf("%d",&x);
    if(x>i){
        printf("List size is smaller than the input location size\n");
    }
    else{
    while(j<x-1){
        temp=p;
        p=p->next;
        j++;
    } 
    temp=temp->next;
    temp=temp->next;
    if(temp->next!=NULL){
        p->next=temp->next;
    }
    else{
        p->next=NULL;
    }
    display();
}
}
void delete_after(){ 
    struct node*p=root;
    struct node*temp=root;
    int i,x,j=1;
    i=length();
    printf("Enter the location of node after you want to delete the node :\n");
    scanf("%d",&x);
    if(x>=i){
        printf("List size is smaller or equal to the input location\n");
    }
    else{
    while(j<x){
        temp=p;
        p=p->next;
        j++;
    } 
    temp=temp->next;
    temp=temp->next;
    if(temp->next!=NULL){
        p->next=temp->next;
    }
    else{
        p->next=NULL;
    }
    display();
}
}
void reverse(){
    struct node*p,*q;
    p=root,q=root;
    int j=length(),temp,i=0;
    while(i<j){
        int k=1;
        while(k<j){
            q=q->next;
            k++;
        }
        temp=p->data;
        p->data=q->data;
        q->data=temp;
        i++,j--,p=p->next,q=root;
}
display();
}
