#include <stdio.h>
#include <stdlib.h>

#define MAX 5 


struct Queue {
    int arr[MAX];
    int front;
    int rear;
};


void initQueue(struct Queue* queue) {
    queue->front = -1;
    queue->rear = -1;
}


int isEmpty(struct Queue* queue) {
    return queue->front == -1;
}


int isFull(struct Queue* queue) {
    return queue->rear == MAX - 1;
}


void enqueue(struct Queue* queue, int value) {
    if (isFull(queue)) {
        printf("Queue Overflow! Cannot enqueue %d\n", value);
    } else {
        if (queue->front == -1) {
            queue->front = 0; 
        }
        queue->rear++;
        queue->arr[queue->rear] = value;  
        printf("%d enqueued to queue\n", value);
    }
}


int dequeue(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue Underflow! Queue is empty\n");
        return -1;  
    } else {
        int dequeuedValue = queue->arr[queue->front];
        if (queue->front == queue->rear) {
            queue->front = queue->rear = -1;  
        } else {
            queue->front++;
        }
        printf("%d dequeued from queue\n", dequeuedValue);
        return dequeuedValue;
    }
}


int front(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty!\n");
        return -1;  
    } else {
        return queue->arr[queue->front]; 
    }
}


void display(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty!\n");
    } else {
        printf("Queue elements are: ");
        for (int i = queue->front; i <= queue->rear; i++) {
            printf("%d ", queue->arr[i]);
        }
        printf("\n");
    }
}


int main() {
    struct Queue queue;
    initQueue(&queue);  

    int choice, value;

    while (1) {
        
        printf("\nQueue Operations (Array Implementation):\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Front\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(&queue, value);
                break;
            case 2:
                dequeue(&queue);
                break;
            case 3:
                value = front(&queue);
                if (value != -1) {
                    printf("Front element is: %d\n", value);
                }
                break;
            case 4:
                display(&queue);
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
