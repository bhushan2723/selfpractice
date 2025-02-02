#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *real = NULL;

void enqueue(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if(front == NULL && real == NULL)
    {
        front = real = newnode;
    }
    else
    {
        real->next=newnode;
        real=newnode;
    }
}

void display()
{
    struct node *temp = front;
    if (temp == NULL && real == NULL)
    {
        printf("\nQueue is Empty\n");
        return;
    }
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void dequeue()
{
    struct node *temp = front;
    if(real == NULL && real == NULL)
    {
        printf("\nqueue is Empty :\n");
    }
    else
    {
        printf("remove elements is : %d \n",temp->data);
        front = front->next;
        free(temp);
    }
}

void peek()
{
    if(real == NULL && front == NULL)
    {
        printf("\nqueue is Empty :\n");
    }
    else
    {
        printf("peek element : %d \n",front->data);
    }
}
void main()
{
    enqueue(2);
    enqueue(3);
    enqueue(4);
    
    display();
    
    peek();
    display();
    
    dequeue();
    display();
    
   
}
