#include<iostream>
using namespace std;
int main(){
	int a[100][100],b[100][100],c[100][100],m,n,p,q,i,j,k,s=0;
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
	for(i=1;i<=m;i++){
		for(j=1;j<=q;j++){
			for(k=1;k<=n;k++){
				s=s||(a[i][k] && b[k][j]);
			}
			c[i][j]=s;
			s=0;
		}
	}
	cout<<"The result of boolean product is:"<<endl;
	for(i=1;i<=m;i++){
		for(j=1;j<=q;j++){
			cout<<c[i][j]<<"\t";
		}
		cout<<endl;
	}
}
