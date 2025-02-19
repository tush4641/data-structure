#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 50


struct Stack {
    int arr[MAX];
    int top;
};


void initStack(struct Stack* stack) {
    stack->top = -1;
}


int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}


int isFull(struct Stack* stack) {
    return stack->top == MAX - 1;
}


void push(struct Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack Overflow!\n");
    } else {
        stack->arr[++(stack->top)] = value;
    }
}


int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow!\n");
        return -1;
    } else {
        return stack->arr[(stack->top)--];
    }
}


int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        return -1;
    } else {
        return stack->arr[stack->top];
    }
}


