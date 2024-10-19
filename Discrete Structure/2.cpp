#include<iostream>
using namespace std;
int main(){
	int a[35],b[35],i,j,m,n;
	cout<<"Enter no. of element in P:";
	cin>>m;
	cout<<"Enter elements of P:"<<endl;
	for(i=1;i<=m;i++){
	cin>>a[i];
	}
	cout<<"Enter no. of element in Q:";
	cin>>n;
	cout<<"Enter elements of Q:"<<endl;
	for(j=1;j<=n;j++){
	cin>>b[j];
	}
	cout<<"Cartesian Product is: {";
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			cout<<"("<<a[i]<<","<<b[j]<<")";
			if((i*j)<m*n-1){ cout<<",";}
		}
	}
	cout<<"}";
}
