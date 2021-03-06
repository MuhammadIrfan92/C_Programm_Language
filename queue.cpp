#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 6

int intArray[MAX];
int front = 0;
int rear = -1;
int itemCount =0;

int peek(){
	return intArray[front];
}

bool isEmpty(){
	return itemCount == 0;
}

bool isFull (){
	return itemCount == MAX;
}

int size(){
	return itemCount;
}


void enqueue(int data) {
	if(!isFull()){
		if(rear == MAX - 1){
			rear = -1;
		}
	}
	
	intArray[++rear]=data;
	itemCount++;
}

int dequeue(){
	int data = intArray[front++];
	
	if(front == MAX){
		front = 0;
	}
	
	itemCount--;
	return data;
	
}

int main(){
	
	enqueue(3);
	enqueue(5);
	enqueue(9);
	enqueue(1);
	enqueue(12);
	
	//front : 0 and rear :4
	//index : 0 1 2 3 4
	//queue : 3 5 9 1 12 
	
	enqueue(15);
	//front : 0 and rear :5
	//index : 0 1 2 3 4 5
	//queue : 3 5 9 1 12 15
	
	if(isFull()){
		printf("Queue is full1\n");
		
	}
	
	int num = dequeue();
	
	printf("element dequeued is : %d\n",num);
	// front : 1
   // rear  : 5
   // -------------------
   // index : 1 2 3 4  5
   // -------------------
   // queue : 5 9 1 12 15

   // insert more items
   enqueue(16);

   // front : 1
   // rear  : -1
   // ----------------------
   // index : 0  1 2 3 4  5
   // ----------------------
   // queue : 16 5 9 1 12 15

   // As queue is full, elements will not be inserted. 
   enqueue(17);
   enqueue(18);

   // ----------------------
   // index : 0  1 2 3 4  5
   // ----------------------
   // queue : 16 5 9 1 12 15
   printf("Element at front: %d\n",peek());

   printf("----------------------\n");
   printf("index : 5 4 3 2  1  0\n");
   printf("----------------------\n");
   printf("Queue:  ");
	
   while(!isEmpty()) {
      int n = dequeue();           
      printf("%d ",n);
   }
	
	
	
	
	
	
	
	
	return 0;
}
