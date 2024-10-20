#include<iostream>
using namespace std;
int implication(int a, int b){
	if(a==1 && b==0)
		return 0;
	else
		return 1;
}
int main(){
	int a,b,k;
	cout<<"Truth Table of Implication"<<endl;
	cout<<"_________________"<<endl;
	cout<<"a\tb\tk"<<endl;
	for(a=0;a<=1;a++){
		for(b=0;b<=1;b++){
			k=implication(a,b);
			cout<<a<<"\t"<<b<<"\t"<<k<<endl;
		}
	}
}
