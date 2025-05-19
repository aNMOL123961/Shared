#include <stdio.h>

int arr[]={1,5,7,13,16,19};
int n=sizeof(arr)/sizeof(arr[0]);

void search(int key){
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            printf("Element Found\n");
            return;
        }
    }
    printf("Element not Found!\n");
}
void binIterative(int key,int lb,int ub){
    while(ub>=lb){
        int mid=(lb+ub)/2;
        if(key==arr[mid]){
            printf("Element Found\n");
            return;
        }else if(key<arr[mid]){
            lb=0;
            ub=mid-1;
        }else{
           lb=mid+1;
           ub=n-1;
        }
    }
    printf("Element Not Found !\n");
}
void binRecursive(int key, int lb, int ub){
    int mid=(lb+ub)/2;
    if(lb>ub){
        printf("Element not Found\n");
        return;
    }
    else if(key==arr[mid]){
        printf("Element Found\n");
        return;
    }else if(key<arr[mid])
        binRecursive(key,lb,mid-1);
    else
        binRecursive(key,mid+1,ub);      
}
int main(){
    int key;
    printf("Enter search key:\n");
    scanf("%d",&key);
    binRecursive(key, 0, n-1);
    return 0;
}
