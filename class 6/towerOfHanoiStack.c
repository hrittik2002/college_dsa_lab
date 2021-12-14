/**
 * Write a C program to implement a stack using array, implementation including the function to check whether the stack is empty.
 * Push an element into the stack; pop an element from a stack. Return the top element from the stack, display the stack elements.
*/



#include <stdio.h>
#include <stdlib.h>
#include <limits.h>     // For INT_MIN

#define SIZE 100

// Create a stack with capacity of 100 elements
int stack_A[SIZE];
int stack_B[SIZE];
int stack_C[SIZE];

// Initially stack is empty 
int top_A = -1;
int top_B = -1;
int top_C = -1;


/* Function declaration to perform push and pop on stack */
void push_A(int element);
int  pop_A();
void isEmpty_A();
int peek_A();
void display_A();
void push_B(int element);
int  pop_B();
void isEmpty_B();
int peek_B();
void display_B();
void push_C(int element);
int  pop_C();
void isEmpty_C();
int peek_C();
void display_C();


int main()
{

    int choice , data;
    choice = 1;

    while(choice == 1){
        printf("Push your disc on tower A : \n");
        scanf("%d" , &data);
        push_A(data);
        printf("Do you want to push more? \n");
        scanf("%d" , &choice);
    }

    //display_A();



    if(top_A == 0){
        int x = pop_A();
        push_C(x);
    }
    else{
        while(top_A != 0){
            int x = pop_A();
            push_B(x);
        }
        int y = pop_A();
        push_C(y);
        while(top_B != -1){
            push_C(pop_B);
        }
    }

    //display_C();



    


    return 0;
}



/**
 * Functiont to push a new element in stack.
 */
void push_A(int element)
{
    // Check stack overflow
    if (top_A >= SIZE)
    {
        printf("Stack Overflow, can't add more element element to stack.\n");
        return;
    }

    // Increase element count in stack
    top_A++;

    // Push element in stack
    stack_A[top_A] = element;

    printf("Disc  pushed to Tower A.\n");
}

void push_B(int element)
{
    // Check stack overflow
    if (top_B >= SIZE)
    {
        printf("Stack Overflow, can't add more element element to stack.\n");
        return;
    }

    // Increase element count in stack
    top_B++;

    // Push element in stack
    stack_B[top_B] = element;

    printf("Disc pushed to Tower B.\n");
}
void push_C(int element)
{
    // Check stack overflow
    if (top_C >= SIZE)
    {
        printf("Stack Overflow, can't add more element element to stack.\n");
        return;
    }

    // Increase element count in stack
    top_C++;

    // Push element in stack
    stack_C[top_C] = element;

    printf("Disc pushed to Tower C.\n");
}


/**
 * Function to pop element from top of stack.
 */
int pop_A()
{
    // Check stack underflow
    if (top_A < 0)
    {
        printf("Stack is empty.\n");

        // Throw empty stack error/exception
        // Since C does not have concept of exception
        // Hence return minimum integer value as error value
        // Later in code check if return value is INT_MIN, then
        // stack is empty
        return INT_MIN;
    }


    // Return stack top and decrease element count in stack
    return stack_A[top_A--];
}

/**
 * Function to pop element from top of stack.
 */
int pop_B()
{
    // Check stack underflow
    if (top_B < 0)
    {
        printf("Stack is empty.\n");

        // Throw empty stack error/exception
        // Since C does not have concept of exception
        // Hence return minimum integer value as error value
        // Later in code check if return value is INT_MIN, then
        // stack is empty
        return INT_MIN;
    }


    // Return stack top and decrease element count in stack
    return stack_B[top_B--];
}

/**
 * Function to pop element from top of stack.
 */
int pop_C()
{
    // Check stack underflow
    if (top_C < 0)
    {
        printf("Stack is empty.\n");

        // Throw empty stack error/exception
        // Since C does not have concept of exception
        // Hence return minimum integer value as error value
        // Later in code check if return value is INT_MIN, then
        // stack is empty
        return INT_MIN;
    }


    // Return stack top and decrease element count in stack
    return stack_C[top_C--];
}

void isEmpty_A(){
    if (top_A < 0)
    {
        printf("Stack is empty.\n");
        
    }
    else{
        printf("Stack is not empty.\n");
    }
}

void isEmpty_B(){
    if (top_B < 0)
    {
        printf("Stack is empty.\n");
        
    }
    else{
        printf("Stack is not empty.\n");
    }
}

void isEmpty_C(){
    if (top_C < 0)
    {
        printf("Stack is empty.\n");
        
    }
    else{
        printf("Stack is not empty.\n");
    }
}

int peek_A(){
    // Check stack underflow
    if (top_A < 0)
    {
        printf("Stack is empty.\n");

        // Throw empty stack error/exception
        // Since C does not have concept of exception
        // Hence return minimum integer value as error value
        // Later in code check if return value is INT_MIN, then
        // stack is empty
        return INT_MIN;
    }


    // Return stack top
    return stack_A[top_A];
}
int peek_B(){
    // Check stack underflow
    if (top_B < 0)
    {
        printf("Stack is empty.\n");

        // Throw empty stack error/exception
        // Since C does not have concept of exception
        // Hence return minimum integer value as error value
        // Later in code check if return value is INT_MIN, then
        // stack is empty
        return INT_MIN;
    }


    // Return stack top
    return stack_B[top_B];
}
int peek_C(){
    // Check stack underflow
    if (top_C < 0)
    {
        printf("Stack is empty.\n");

        // Throw empty stack error/exception
        // Since C does not have concept of exception
        // Hence return minimum integer value as error value
        // Later in code check if return value is INT_MIN, then
        // stack is empty
        return INT_MIN;
    }


    // Return stack top
    return stack_C[top_C];
}

void display_A(){
    int l = top_A + 1;
    printf("Elements on stack A:\n");
    for(int i = 0; i < l; i++){
        printf("%d\n", stack_A[i]);
    }
}

void display_B(){
    int l = top_B + 1;
    printf("Elements on stack B:\n");
    for(int i = 0; i < l; i++){
        printf("%d\n", stack_B[i]);
    }
}

void display_C(){
    int l = top_C + 1;
    printf("Elements on stack C:\n");
    for(int i = 0; i < l; i++){
        printf("%d\n", stack_C[i]);
    }
}