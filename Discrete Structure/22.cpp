#include<iostream>
using namespace std;
int bi_implication(int a, int b){
	if((a==0 && b==0) || (a==1 && b==1))
		return 0;
	else
		return 1;
}
int main(){
	int a,b,k;
	cout<<"Truth Table of Bi-implication"<<endl;
	cout<<"_________________"<<endl;
	cout<<"a\tb\tk"<<endl;
	for(a=0;a<=1;a++){
		for(b=0;b<=1;b++){
			k=bi_implication(a,b);
			cout<<a<<"\t"<<b<<"\t"<<k<<endl;
		}
	}
}
