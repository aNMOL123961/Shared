#include<iostream>
using namespace std;
int negation(int a){
	if(a==1)
		return 0;
	else
		return 1;
}
int main(){
	int a,k;
	cout<<"Truth Table of Negation"<<endl;
	cout<<"_________________"<<endl;
	cout<<"a\tk"<<endl;
	for(a=0;a<=1;a++){
	k=negation(a);
	cout<<a<<"\t"<<k<<endl;
	}
}

