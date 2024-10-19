#include<iostream>
using namespace std;
int main(){
	long int n,r,i,m=1,o=1,per;
	cout<<"Enter value of n and r: "<<endl;
	cin>>n>>r;
	for(i=n;i>=1;i--){
	m=m*i;
	}
	for(i=n-r;i>=1;i--){
	o=o*i;
	}
	per=m/o;
	cout<<"Permutation: "<<per;
}
