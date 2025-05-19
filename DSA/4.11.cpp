#include<stdio.h>
#include<stdlib.h>

struct Node{
    int info;
    struct Node *next;
};
typedef struct Node NodeType;
NodeType *front=NULL,*rear=NULL,*nNode,*temp;

void enqueue(int item){
     nNode=(NodeType*)malloc(sizeof(NodeType));
     nNode->info=item;
     if(rear==NULL){
        nNode->next=NULL;
        front=rear=nNode;
     }else{
       nNode->next=NULL;
       rear->next=nNode;
       rear=nNode;
     }
     printf("%d inserted \n",item);
}
void dequeue(){
   if(front==NULL){
      printf("Queue is empty \n");
      return;
   }
   if(front->next==NULL){
       temp=front;
       front=rear=NULL;
       free(temp);
   }else{
       temp=front;
       front=front->next;
       free(temp);
   }
}
void display(){
    printf("Elements are:\n");
    temp=front;
    while(temp!=NULL){
        printf("%d\t",temp->info);
        temp=temp->next;
    }
}
int main(){
   enqueue(10);
   enqueue(20);
   enqueue(30);
   dequeue();
   display();
   return 0;
}
