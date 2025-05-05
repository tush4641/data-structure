#include<stdio.h>
 #define SIZE 5
int queue[SIZE], front = -1, rear = -1;
  
   void insert(int value){
       if (rear == SIZE-1) {
         printf("Queue is full\n");
       }else{
          if(front == -1) front=0;
            queue[++rear] = value;
        printf("insert %d into queue\n", value);
       }
  }
  
   void display(){
       if (front == -1){
           printf("queue is empty\n");
       }else{
           printf("queue: ");
        for (int i=front; i<=rear; i++)
          printf("%d", queue[i]);
          printf("\n");
       }
   }  
       
      int main() {
          insert(10);
          insert(28);
          insert(76);
          display();
          return 0;
      } 
