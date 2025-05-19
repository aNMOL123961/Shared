#include <stdio.h>
#include <stdlib.h>
struct Node{
    int info;
    struct Node *prev;
    struct Node *next;
};
typedef struct Node NodeType;
NodeType *head=NULL, *newNode, *temp;

void insert(int item){
    newNode=(NodeType *) malloc(sizeof(NodeType));
    newNode->info=item;
    if(head==NULL){
        newNode->prev=NULL;
        newNode->next=NULL;
        head=newNode;
    }else{
        newNode->prev=NULL;
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
    printf("%d Inserted\n",item);
}
void delete1(){
    if(head==NULL)
        printf("No Elements to Delete !\n");
    else{
        if(head->next==NULL){
            temp=head;
            head=NULL;
            free(temp);
        }else{
            temp=head;
            head=temp->next;
            head->prev=NULL;
            free(temp);
        }
        printf("Deleted\n");
    }
}
void display(){
    temp=head;
    printf("Elements are:\n");
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
