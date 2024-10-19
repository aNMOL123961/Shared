#include<iostream>
using namespace std;
int main(){
	int a[100],b[100],i,n,m,j,count;
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
	cout<<"Union is:"<<endl;
	for(i=0;i<m;i++){
		cout<<a[i]<<" ";
	}for(j=0;j<n;j++){
		count=0;
		for(i=0;i<m;i++){
			if(a[i]==b[j])
				count=1;
		}
		if (count!=1)
			cout<<b[j]<<" ";
	}
}
