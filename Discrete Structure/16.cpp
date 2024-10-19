#include<iostream>
using namespace std;
int main(){
	int a[100],b[100],i,n,m,j;
	cout<<"Enter amount of number of set A:";
	cin>>m;
	cout<<"Enter elements:"<<endl;
	for(i=0;i<m;i++){
		cin>>a[i];
	}
	cout<<"Enter amount of number of set B:";
	cin>>n;
	cout<<"Enter elements:"<<endl;
	for(j=0;j<n;j++){
		cin>>b[j];
	}
	cout<<"Intersection is:"<<endl;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(a[i]==b[j]){
				cout<<b[j]<<" ";
			}
		}
	}
}
