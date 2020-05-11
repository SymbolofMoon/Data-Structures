#include<stdio.h>
#define N 5

int queue[N];
int front=-1;
int rear=-1;

void enqueue(int x){
    if (rear==N-1){
        printf("Overflow");
    }
    else if (front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else
    {
        rear++;
        queue[rear]=x;
    }
    
    
}

void dequeue(){
    if (front==-1 && rear==-1){
        printf("No data");
    }
    else if (front==rear)
    {
        front=rear=-1;
    }
    else
    {
        printf("%d",queue[front]);
        front++;
    }
    
    
}

void display(){
    int i;
    if (front==-1 && rear==-1){
        printf("No data");
    }

    else {
        for (i=front;i<rear+1;i++){
            printf("%d ",queue[i]);
        }
    }
}

void peek(){
    if (front==-1 && rear==-1){
        printf("No data");
    }
    else {
         printf("%d ",queue[front]);
    }
}

void main(){
    enqueue(2);
    enqueue(4);
    enqueue(8);
    display();
    printf("\n");
    peek();
    printf("\n");
    dequeue();
    printf("\n");
    peek();
    printf("\n");
    display();
    printf("\n");

}