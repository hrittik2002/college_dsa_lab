#include <stdio.h>

struct Node
{
    /* data */
    int data;
    struct Node *next;
}*head;


/* 
 * Functions to create and display list
 */
void createList(int n);
void traverseList()

/**
 * MAIN METHOD
*/
int main(){
    int n;
    printf("Enter the total number of nodes");
    scanf("%d", &n);

    // STEP 1 : CREATE THE LINKED LIST
    createLinkedlist(n);

    // STEP 2 : TRAVERSE THROUGH THE LINKED LIST
    traverseList();





}

/**
 * Display entire list
*/
void traverseList(){
    struct Node *temp;

    // if list is empty
    if(head == NULL)
    {
        printf("List is empty...");
        return;
    }

    temp = head;
    while(temp != NULL){
        printf("Data = %d\n", temp->data); 
        temp = temp->next; 
    }
}

/**
 * Create the linked list that consist of n nodes
*/
void createLinkedlist(int n){


    struct Node *newNode, *temp;

    head = (struct Node *)malloc(sizeof(struct Node));
    // Terminate if memory is not allocated
    if(head == NULL){
        printf("Unable to allocate memory...");
        exit(0);
    }

    // if there is space in memory
    //Input data from the user
    int data;
    printf("Enter the data for Node 1 : ");
    scanf("%d" , &data);

    head->data = data;
    head->next = NULL;

    // Create rest nodes
    
    temp = head;
    for(int i = 2; i <= n; i++){


        // Terminate if memory is not allocated for new node
        newNode = (struct Node *)malloc(sizeof(struct Node));
        if(head == NULL){
        printf("Unable to allocate memory...");
        break;

        printf("Enter the data of Node %d: " , i);
        scanf("%d" , &data);

        newNode->data = data; // Link data field of newNode
        newNode->next = NULL; // Make sure new node points to NULL 

        temp->next = newNode; // Link previous node with newNode
        temp = temp->next;    // Make current node as previous node

    }

    }

}