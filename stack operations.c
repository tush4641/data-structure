#include <stdio.h>
#include <stdlib.h>

#define MAX 5 


struct Stack {
    int arr[MAX];
    int top;
};


void initStack(struct Stack* stack) {
    stack->top = -1;  
}


int isFull(struct Stack* stack) {
    return stack->top == MAX - 1;
}


int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}


void push(struct Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        stack->arr[++(stack->top)] = value;  
        printf("%d pushed onto stack\n", value);
    }
}


int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow! Stack is empty\n");
        return -1; 
    } else {
        int poppedValue = stack->arr[(stack->top)--];  
        printf("%d popped from stack\n", poppedValue);
        return poppedValue;
    }
}


int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
        return -1;  
    } else {
        return stack->arr[stack->top];
    }
}


void display(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
    } else {
        printf("Stack elements are: ");
        for (int i = 0; i <=
