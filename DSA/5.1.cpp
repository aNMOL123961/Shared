#include <stdio.h>

int arr[8]={10,13,44,7,15,13,23,14};
int n=8;
int i,j,temp;

void bubble(){
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void selection(){
    int min_idx;
      for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++){
            if (arr[j] < arr[min_idx]){
                min_idx = j;
                temp=arr[i];
                arr[i]=arr[min_idx];
                arr[min_idx]=temp;
            }
        }
	}
}
void insertion(){
    for(i=1;i<n;i++){
        temp=arr[i];
        for(j=i-1;temp<arr[j]&&j>=0;j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=temp;
    }
}
void shell(){
    int gap;
    for(gap=n/2;gap>=1;gap=gap/2){
        for(j=gap;j<n;j++){
            for(i=j-gap;i>=0&&arr[i]>arr[i+gap];i--){
                temp=arr[i];
                arr[i]=arr[i+gap];
                arr[i+gap]=temp;
            }
        }
    }
}
void display(){
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
}
int main(){
    selection();
    bubble();
    display();
    return 0;
}
