// (b) What is STACK? Write a function using C-language PUSH, POP
// operation of stack

#include <stdio.h>
#define MAX 5  

struct Stack {
    int items[MAX];
    int top;  
};


void initStack(struct Stack* s) {
    s->top = -1;  
}

int isFull(struct Stack* s) {
    return s->top == MAX - 1;  
}


int isEmpty(struct Stack* s) {
    return s->top == -1;  
}

void push(struct Stack* s, int value) {
    if (isFull(s)) {
        printf("Stack Overflow! Can't push %d\n", value);
        return;
    }
    s->top++;              
    s->items[s->top] = value;  
    printf("Pushed %d\n", value);
}


int pop(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Stack Underflow! Nothing to pop\n");
        return -1;  
    }
    int value = s->items[s->top];  
    s->top--;                      
    printf("Popped %d\n", value);
    return value;
}


int main() {
    struct Stack s;
    initStack(&s);

    // Push some values
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);


    // Pop some values
    pop(&s, 50);
    pop(&s, 34);
    pop(&s, 46); 

    return 0;
}