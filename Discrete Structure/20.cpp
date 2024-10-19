#include<iostream>
using namespace std;
int conjuction(int a, int b){
	if(a==1 || b==1)
		return 1;
	else
		return 0;
}
int main(){
	int a,b,k;
	cout<<"Truth Table of Disjuction"<<endl;
	cout<<"_________________"<<endl;
	cout<<"a\tb\tk"<<endl;
	for(a=0;a<=1;a++){
		for(b=0;b<=1;b++){
			k=conjuction(a,b);
			cout<<a<<"\t"<<b<<"\t"<<k<<endl;
		}
	}
}
