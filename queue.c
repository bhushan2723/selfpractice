//queue implementation using array 

#include<stdio.h>
#include<stdlib.h>
#define N 5
int queue[N];
int real = -1;
int front = -1;

int enqueue(int x)
{
    if(real == N-1)
    {
        printf("\nqueue is overflow :");
    }
    else if(real == -1 && front == -1)
    {
        real = front = 0;
        queue[real] = x;
    }
    else 
    {
        real++;
       queue[real]=x;
    }
}

void dequeue()
{
    if(front == -1 && real == -1)
    {
        printf("\nqueue is Empty :");
    }
    else if(real == front)
    {
        front = real = -1;
    }
    else
    {
        printf("\ndequeue Elements : %d  \n",queue[front]);
        front++;
    }
}

void display()
{
    if(real == -1 && front == -1)
    {
        printf("\nqueue is Empty :\n");
    }
    else
    {
        for(int i=front;i<real+1;i++)
        {
            printf("\nqueue Elements is : %d\n",queue[i]);
        }
    }
}

void peek()
{
    if(real == -1 && front == -1)
    {
        printf("\nqueue is Empty :\n");
    }
    else
    {
        printf("\nPeek Element is : %d  \n",queue[front]);
    }
}

void main()
{
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    enqueue(7);
    
    display();
    
    
    dequeue();
    display();
    
    
    peek();
    display();
    
    
}
