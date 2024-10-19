#include<iostream>
using namespace std;
void binarysearch(int a[],int low, int high, int key){
	int mid;
	mid=(low+high)/2;
	if(key==a[mid])
		cout<<"Search successfull at location:"<<mid+1;
	else if(key<a[mid])
		binarysearch(a,low,mid-1,key);
	else if(key>a[mid])
		binarysearch(a,mid+1,high,key);
}
int main(){
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int low=0,high=10,key;
	cout<<"Enter search number:";
	cin>>key;
	binarysearch(a,low,high,key);
}
