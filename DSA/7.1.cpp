#include<stdio.h>
#include<stdlib.h>

struct Node{
    int info;
    struct Node *left;
    struct Node * right;
	};
	typedef struct Node NodeType;
	NodeType *BSTinsert(NodeType *root,int item){
    if(root==NULL){
        root=(NodeType*)malloc(sizeof(NodeType));
        root->info=item;
        root->left=NULL;
        root->right=NULL;
    }else{
        if(item<root->info)
           root->left=BSTinsert(root->left, item);
        else
            root->right=BSTinsert(root->right, item);
    }
    return root;
	}
void Preorder(NodeType *root){
    if(root!=NULL){
        printf("%d\t",root->info);
        Preorder(root->left);
        Preorder(root->right);
    }
}
void Inorder(NodeType *root){
    if(root!=NULL){
        Inorder(root->left);
        printf("%d\t",root->info);
        Inorder(root->right);
    }
}
int main(){
    NodeType *root=NULL;
    root=BSTinsert(root,10);
    root=BSTinsert(root,20);
    root=BSTinsert(root,30);
    root=BSTinsert(root,25);
    root=BSTinsert(root,8);
    root=BSTinsert(root,7);
    root=BSTinsert(root,9);
    printf("\nPreorder Result:");
    Preorder(root);
    printf("\nInorder Result:");
    Inorder(root);
    return 0;
}
