// (8) Write the different operations that can be performed on a stack.
// Give array implementation of a stack. →

#include <stdio.h>
#include <stdbool.h>

#define MAX 5 // Maximum size of the stack

// Stack structure
struct Stack {
    int arr[MAX]; // Array to store stack elements
    int top;      // Index of the top element
};

// Initialize the stack
void initStack(struct Stack* s) {
    s->top = -1; // Empty stack
}

// Check if the stack is empty
bool isEmpty(struct Stack* s) {
    return s->top == -1;
}

// Check if the stack is full
bool isFull(struct Stack* s) {
    return s->top == MAX - 1;
}

// Push an element onto the stack
void push(struct Stack* s, int value) {
    if (isFull(s)) {
        printf("Stack Overflow! Cannot push %d\n", value);
        return;
    }
    s->top++;                // Increment top
    s->arr[s->top] = value; // Add element to top
    printf("Pushed %d\n", value);
}

// Pop an element from the stack
int pop(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Stack Underflow! Cannot pop\n");
        return -1; // Error value
    }
    int value = s->arr[s->top]; // Get top element
    s->top--;                   // Decrement top
    printf("Popped %d\n", value);
    return value;
}

// Peek at the top element
int peek(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty! Cannot peek\n");
        return -1; // Error value
    }
    return s->arr[s->top];
}

// Main function to test the stack
int main() {
    struct Stack s;
    initStack(&s);

    // Test stack operations
    printf("Is stack empty? %s\n", isEmpty(&s) ? "Yes" : "No");

    push(&s, 10); // Stack: [10]
    push(&s, 20); // Stack: [10, 20]
    push(&s, 30); // Stack: [10, 20, 30]

    printf("Top element: %d\n", peek(&s)); // Should print 30

    pop(&s); // Stack: [10, 20]
    pop(&s); // Stack: [10]

    printf("Is stack empty? %s\n", isEmpty(&s) ? "Yes" : "No");

    push(&s, 40); // Stack: [10, 40]
    push(&s, 50); // Stack: [10, 40, 50]
    push(&s, 60); // Stack: [10, 40, 50, 60]
    push(&s, 70); // Stack overflow

    return 0;
}