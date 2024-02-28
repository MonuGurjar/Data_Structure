    #include<stdio.h>  
    #include<stdlib.h>  
    struct node   
    {  
        int data;  
        struct node *next;   
    };  
    struct node *head;  
      
    void beginsert ();  
    void endinsert();
     



    void main ()  
    {  
        int choice =0;  
        while(choice != 7)   
        {  
            printf("\nChoose an option \n");  
            printf("\nEnter your choice?\n");         
            scanf("%d",&choice);  
            switch(choice)
            {  
                case 1:  
                beginsert();      
                break;  
                // case 2:  
                // lastinsert();         
                // break;  
                // case 3:  
                // begin_delete();       
                // break;  
                // case 4:  
                // last_delete();        
                // break;  
                // case 5:  
                // search();         
                // break;  
                // case 6:  
                // display();        
                // break;  
                case 7:  
                exit(0);  
                break;  
                default:  
                printf("Please enter valid choice..");  
            }  
        }  
    } 

    void beginsert()  
    {  
        struct node *ptr,*temp;   
        int item;   
        ptr = (struct node *)malloc(sizeof(struct node));  
        if(ptr == NULL)  
        {  
            printf("\nOVERFLOW");  
        }  
        else   
        {  
            printf("Enter the node data?\n");  
            scanf("%d",&item);  
            ptr -> data = item;  
            if(head == NULL)  
            {  
                head = ptr;  
                ptr -> next = head;  
            }  
            else   
            {     
                temp = head;  
                while(temp->next != head)  
                    temp = temp->next;  
                ptr->next = head;   
                temp -> next = ptr;   
                head = ptr;  
            }   
            printf("Node Inserted\n"); 
        }  
                  
    } 

    
    // void display(){
    //     struct node *ptr;  
    //     ptr=head;  
    //     if(head == NULL)  
    //     {  
    //         printf("\nnothing to print");  
    //     }     
    //     else  
    //     {  
    //         printf("\n printing values ... \n");  
              
    //         while(ptr -> next != head)  
    //         {  
              
    //             printf("%d\n", ptr -> data);  
    //             ptr = ptr -> next;  
    //         }  
    //         printf("%d\n", ptr -> data);  
    //     }  
                  
    // }  