#include<stdio.h>
#include <stdlib.h>
#define m 5
int htable[m];

void init(){
    for(int i=0;i<m;i++)
        htable[i]=0;
}
int hashFunction(int kvalue){
    int hindex=kvalue%m;
    return hindex;
}
void insert(int kvalue){
    int hindex=hashFunction(kvalue);
    if(htable[hindex]==0){  
        htable[hindex]=kvalue;
        printf("Inserted\n");
    }else{
        printf("Collision Occured\n");
        while(htable[hindex]!=0){
            hindex++;
        }
        if(hindex<m){
             htable[hindex]=kvalue;
             printf("Inserted\n");
        }
        else
            printf("No Slot in Hash Table\n");
    }
}
void search(int kvalue){
    int hindex=hashFunction(kvalue);
    if(htable[hindex]==kvalue)
        printf("Element Found at index: %d\n",hindex);
    else{
        while(hindex<m){
            if(kvalue==htable[hindex]){
                printf("Element Found at index: %d \n",hindex);
                return;
            }
            hindex++;
        }
        printf("Element not Found!");
    }
}
void display(){
    for(int i=0;i<m;i++)
        printf("%d\t",htable[i]);
}
int main(){
    init();  
    int choice,kvalue;
    printf("1. Insert\t 2. Search\t 3. Display\t 4. Exit");
	x:  printf("\nEnter choice\n");
    scanf("%d",&choice);
    switch (choice) {
        case 1:
            printf("Enter key value to insert:\n");
            scanf("%d",&kvalue);
            insert(kvalue);
            break;
        case 2:
            printf("Enter key value to search:\n");
            scanf("%d",&kvalue);
            search(kvalue);
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            break;
    }
     goto x;
    return 0;
}
