//stack using the linked list 
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

struct node
{
    int data;
    struct node *link;
};

struct node *top = NULL;

int isFull()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL) 
    {
        return 1;  
    }
    free(temp);
    return 0;
} 

int isEmpty()
{
    return top == NULL;
}

void push(int x)
{
    if (isFull())
    {
        printf("Stack is full! Cannot push %d.\n", x);
        return;
    }
    
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->link = top;
    top = newnode;
    printf("Pushed %d onto the stack.\n", x);
}

void pop() 
{
    if (isEmpty()) 
    {
        printf("Stack is empty! Nothing to pop.\n");
        return;
    }
    
    struct node *temp;
    temp = top;
    printf("Popped %d from the stack.\n", top->data);
    top = top->link;
    free(temp);
}


void display()
{
    if (isEmpty()) 
    {
        printf("Stack is empty!\n");
        return;
    }
    struct node *temp = top;
    printf("Stack elements: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
}

void peek()
{
    if(isEmpty())
    {
        printf("stack is empty :");
        return;
    }
    else
    {
        printf("top element is %d \n",top->data);
    }
    
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    
    display();

    pop();
    display();
    
    peek();
    
    return 0;
}

/*
Pushed 10 onto the stack.
Pushed 20 onto the stack.
Pushed 30 onto the stack.
Pushed 40 onto the stack.
Pushed 50 onto the stack.
Stack elements: 50 -> 40 -> 30 -> 20 -> 10 -> NULL
Popped 50 from the stack.
Stack elements: 40 -> 30 -> 20 -> 10 -> NULL
top element is 40 
*/
