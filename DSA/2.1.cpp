#include<stdio.h>
#include<stdlib.h>

int size=5;
int front=-1,rear=-1;
int queue[5];
void enqueue(int item){
    if(rear==size-1)
        printf("\nQueue Overflow");
    else{
        if(front==-1)
            front=rear=0;
        else
            rear++;
        queue[rear]=item;
        printf("\nItem inserted at %d is %d",rear,item);
    }
}
void dequeue(){
    if(rear==-1)
        printf("\nQueue is empty");
    else{
        int item=queue[front];
        printf("\nItem deleted at %d is %d",front,item);
        if(front==rear)
            front=rear=-1;
        else
            front++;
    }
}
void display(){
    if(rear==-1)
        printf("\nQueue is empty");
    else{
        printf("\nElements are:\n");
        for(int i=front;i<=rear;i++)
            printf("%d\t",queue[i]);
    }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
}
