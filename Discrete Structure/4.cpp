#include<iostream>
using namespace std;
int main(){
	long int n,r,i,j,k,m=1,o=1,p=1,combi;
	cout<<"Enter value of n and r: "<<endl;
	cin>>n>>r;
	for(i=n;i>=1;i--){
	m=m*i;
	}
	for(j=r;j>=1;j--){
	p=p*j;
	}
	for(k=n-r;k>=1;k--){
	o=o*k;
	}
	combi=m/(o*p);
	cout<<"Combination: "<<combi;
	return 0;
}
