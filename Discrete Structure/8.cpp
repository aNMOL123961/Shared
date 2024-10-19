#include<iostream>
using namespace std;
void linearsearch(int a[],int low, int high,int key){
	if(key==a[low])
		cout<<"Searching successfull at location:"<<low+1;
	else
		linearsearch(a,low+1,high,key);
}
int main(){
	int a[35],n,i,key;
	cout<<"Enter no. of elements: ";
	cin>>n;
	cout<<"Enter elements of array: "<<endl;
	for(i=0;i<=n-1;i++){
	cin>>a[i];
	}
	cout<<"Enter element to search:";
	cin>>key;
	linearsearch(a,0,n-1,key);
}
