#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


struct Node* createStack() {
    return NULL;  
}


int isEmpty(struct Node* top) {
    return top == NULL;
}


void push(struct Node** top, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    newNode->data = value;
    newNode->next = *top;
    *top = newNode;  

    printf("%d pushed onto stack\n", value);
}


int pop(struct Node** top) {
    if (isEmpty(*top)) {
        printf("Stack Underflow! Stack is empty\n");
        return -1;  
    } else {
        struct Node* temp = *top;
        int poppedValue = temp->data;
        *top = (*top)->next;  
        free(temp);  

        printf("%d popped from stack\n", poppedValue);
        return poppedValue;
    }
}


int peek(struct Node* top) {
    if (isEmpty(top)) {
        printf("Stack is empty!\n");
        return -1; 
    } else {
        return top->data;  
    }
}


void display(struct Node* top) {
    if (isEmpty(top)) {
        printf("Stack is empty!\n");
    } else {
        printf("Stack elements are: ");
        struct Node* temp = top;
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main() {
    struct Node* stack = createStack(); 

    int choice, value;

    while (1) {
        
        printf("\nStack Operations (Linked List Implementation):\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(&stack, value);
                break;
            case 2:
                pop(&stack);
                break;
            case 3:
                value = peek(stack);
                if (value != -1) {
                    printf("Top element is: %d\n", value);
                }
                break;
            case 4:
                display(stack);
                break;
            case 5:
                printf("Exiting...\n");
                exit(0);
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}
