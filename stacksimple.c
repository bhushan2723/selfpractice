#include <stdio.h>
#include <stdlib.h>

#define MAX 5
int stack[MAX];
int top = -1;

void push(int x) {
    if (top == MAX - 1) {
        printf("\nStack Overflow!");
        return;
    }
    top++;
    stack[top] = x;
    printf("\nPushed %d into stack.", x);
}

// Pop function
void pop() {
    if (top == -1) {
        printf("\nStack is empty.");
        return;
    }
    printf("\nPopped element: %d", stack[top]);
    top--;
}

// Peek function
void peek() {
    if (top == -1) {
        printf("\nStack is empty.");
        return;
    }
    printf("\nTop element: %d", stack[top]);
}

// Display function
void display() {
    if (top == -1) {
        printf("\nStack is empty.");
        return;
    }
    printf("\nStack elements: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

// Main function
int main() {
    int ch, x;
    while (1) {
        printf("\n\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: 
                printf("\nEnter the data: ");
                scanf("%d", &x);
                push(x);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("\nInvalid choice! Please enter a valid option.");
        }
    }
    return 0;
}
