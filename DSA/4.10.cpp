#include<stdio.h>
#include<stdlib.h>

struct Node{
    int info;
    struct Node *next;
};
typedef struct Node NodeType;
NodeType *top=NULL,*nNode,*temp;

void push(int item){
     nNode=(NodeType*)malloc(sizeof(NodeType));
     nNode->info=item;
     if(top==NULL){
        nNode->next=NULL;
        top=nNode;
     }else{
        nNode->next=top;
        top=nNode;
     }
     printf("%d inserted \n",item);
}

void pop(){
   if(top==NULL){
      printf("Stack is empty \n");
      return;
   }
   if(top->next==NULL){
       temp=top;
       top=NULL;
       free(temp);
   }else{
       temp=top;
       top=top->next;
       free(temp);
   }
}

void display(){
    printf("Elements are:\n");
    temp=top;
    while(temp!=NULL){
        printf("%d\t",temp->info);
        temp=temp->next;
    }
}

int main(){
   push(10);
   push(20);
   push(30);
   pop();
   display();
   return 0;
}
