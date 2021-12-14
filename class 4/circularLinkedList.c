/**
 * C program to create and display Doubly linked list
 */

#include <stdio.h>
#include <stdlib.h>

/* 
 * Basic structure of Node
 */
struct node {
    int data;
    struct node * next;
}*head;


/*
 * Function used in this program 
 */
void createList(int n);
void displayList();
void insertAtBeginning(int data);



int main()
{
    int n, choice,x , y;
    choice = 1;

    head = NULL;

    printf("============================================\n");
    printf("DOUBLY LINKED LIST PROGRAM\n");
    printf("============================================\n");
    
    printf("Enter the number of nodes you want to create: ");
    scanf("%d", &n);

    // Create doubly linked list
    createList(n); 

    // Display the doubly linked list
    displayList();

    /*
     * Run forever until user chooses 0
     */
    while(choice != 0)
    {
        /*
         * Menu creation to use the program
         */
        printf("============================================\n");
        printf("CIRCULAR LINKED LIST PROGRAM\n");
        printf("============================================\n");
        printf("1. Insert node - at beginning\n");
        printf("2. Insert node - at end\n");
        printf("3. Insert node - after a node\n");
        printf("4. Insert node - before a node\n");
        printf("5. Delete node - at beginning\n");
        printf("6. Delete node - at end\n");
        printf("7. Delete node - after a node\n");
        printf("8. Delete node - before a node\n");
        printf("9. Display list\n");
        printf("0. Exit\n");
        printf("--------------------------------------------\n");
        printf("Enter your choice : ");

        scanf("%d", &choice);

        /*
         * Choose from different menu operation
         */
        switch(choice)
        {
            case 1:
                printf("Enter the data to be added at first : ");
                scanf("%d", &x);
                // insert
                insertAtBeginning(x);
                // Display 
                displayList();
                break;
            case 2:
                printf("Enter the data to be added at last : ");
                scanf("%d", &x);
                // insert
                insertAtEnd(x);
                // Display 
                displayList();
            case 3:
                printf("Enter the data to be added after a node : ");
                scanf("%d", &x);
                printf("After which node you want to put the above data : ");
                scanf("%d", &y);
                // insert
                //insertAfter(x , y);
                // Display 
                //displayList();
                break;
            case 4:
                // insert before given data
                printf("Enter the value to be insterted ");
                scanf("%d" , &x);
                printf("Enter the value of the node before which you want to insert the new node");
                scanf("%d" , &y);
                //insert_Before(y , x);
                //displayList();
                break;
                
            case 5:
                // delete from first
                //delete_At_Front();
                //displayList();
                break;
            case 6:
                // delete from end
                // delete_At_End();
                // displayList();
                break;
            case 7:
                 // delete after
                printf("Enter the value of the node whose next node you want to delete ");
                scanf("%d" , &x);
                // delete_After(x);
                // displayList();
                break;
            case 8:
                // delete before
                printf("Enter the value of the node whose previous node you want to delete ");
                scanf("%d" , &x);
                // delete_Before(x);
                // displayList();
                break; 
                
            case 0:
                break;
            default:
                printf("Error! Invalid choice. Please choose between 0-5");
        }

        printf("\n");
    }



    return 0;
}


/**
 * Create a doubly linked list of n nodes.
 * @n Number of nodes to be created
 */
void createList(int n)
{
    int i, data;
    struct node *prevNode, *newNode;

    if(n >= 1)
    {
        /*
         * Creates and links the head node
         */
        head = (struct node *)malloc(sizeof(struct node));

        printf("Enter data of 1 node: ");
        scanf("%d", &data);

        head->data = data;
        head->next = NULL;

        prevNode = head;

        /*
         * Creates and links rest of the n-1 nodes
         */
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));

            printf("Enter data of %d node: ", i);
            scanf("%d", &data);

            newNode->data = data;
            newNode->next = NULL;

            //Links the previous node with newly created node
            prevNode->next = newNode;
            //Moves the previous node ahead
            prevNode = newNode;
        }

        //Links the last node with first node
        prevNode->next = head;

        printf("\nCIRCULAR LINKED LIST CREATED SUCCESSFULLY\n");
    }
}


/**
 * Displays the content of the list
 */
void displayList()
{
    struct node *current;
    int n = 1;

    if(head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        current = head;
        printf("DATA IN THE LIST:\n");

        do {
            printf("Data %d = %d\n", n, current->data);

            current = current->next;
            n++;
        }while(current != head);
    }
}


/**
 * Inserts a new node at the beginning of the list
 * @data Data of the first node
 */
void insertAtBeginning(int data)
{
    struct node *newNode, *current;

    if(head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        /*
         * Creates new node, assign data and links it to head
         */
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = data;
        newNode->next = head;

        /*
         * Traverses to last node and links last node
         * with first node which is new node
         */
        current = head;
        while(current->next != head)
        {
            current = current->next;
        }
        current->next = newNode;

        /*Makes new node as head node*/
        head = newNode;

        printf("NODE INSERTED SUCCESSFULLY\n");
    }
}

void insertAtEnd(int value)
{
    struct node *p,*q;
    p=malloc(sizeof(struct node));
    p->data=value;
    p->next=NULL;

    q=head;
    while(q->next!=head)
    {
        q = q->next;
    }
    q->next = p;
    p->next = head;

        
        

    printf("NODE INSERTED SUCCESSFULLY AT THE END OF LIST\n");
    
}