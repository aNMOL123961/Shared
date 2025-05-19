#include <stdio.h>
#include<stdlib.h>

struct Node{
    int info;
    struct Node *next;
};
typedef struct Node NodeType;
NodeType *head=NULL,*newNode,*temp;
void insert(int item){
    newNode=(NodeType *)malloc(sizeof(NodeType));
    newNode->info=item;
    newNode->next=head;
    head=newNode;
    printf("%d inserted\n",item);
}
void delete1(){
    if(head==NULL)
        printf("No Elements to Delete\n");
    else{
        temp=head;
        head=head->next;
        printf("Item deleted is: %d\n",temp->info);
        free(temp);
    }
}
void display(){
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->info);
        temp=temp->next;
    }
}
int main(){
    insert(10);
    insert(20);
    insert(30);
    delete1();
    display();
}
