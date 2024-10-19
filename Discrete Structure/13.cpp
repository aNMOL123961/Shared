#include<iostream>
using namespace std;
int main(){
	int a[100][100],b[100][100],c[100][100],m,n,p,q,i,j;
	cout<<"Enter row and column of A:";
	cin>>m>>n;
	cout<<"Enter elements of A:"<<endl;
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	cout<<"Enter row and column of B:";
	cin>>p>>q;
	cout<<"Enter elements of B:"<<endl;
	for(i=1;i<=p;i++){
		for(j=1;j<=q;j++){
			cin>>b[i][j];
		}
	}
	cout<<"The result of boolean join is:"<<endl;
	for(i=1;i<=m;i++){
		for(j=1;j<=q;j++){
			c[i][j]=a[i][j] && b[i][j];
			cout<<c[i][j]<<"\t";
		}
		cout<<endl;
	}
}
