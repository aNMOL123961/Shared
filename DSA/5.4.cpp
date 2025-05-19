#include <stdio.h>

void MaxHeapify(int arr[],int n,int i){
    int largest=i;
    int l=2*i+1;
    int r=l+1;
    if(l<n && arr[l]>arr[largest])
        largest=l;
    if(r<n && arr[r]>arr[largest])
        largest=r;
    if(largest!=i){
        int temp;
        temp=arr[i];
        arr[i]=arr[largest];
        arr[largest]=temp;
        MaxHeapify(arr, n, largest);
    }
}
void HeapSort(int arr[],int n){
    int temp;
    for(int i=n/2-1;i>=0;i--)
        MaxHeapify(arr,n,i);
    for(int i=n-1;i>=0;i--){
        temp=arr[0];
        arr[0]=arr[i];
        arr[i]=temp;
        MaxHeapify(arr,i,0);
    }
}
int main(){
    int arr[]={10,7,9,12,7,13,9,6,3,2,1};
    int n=sizeof(arr)/4;
    HeapSort(arr,n);
    for(int i=0;i<n;i++)
        printf("%d\t",arr[i]);
    return 0;
}
