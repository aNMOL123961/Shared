#include<iostream>
using namespace std;
long int fib(long int n){
	if(n==0) { return 0;}
	else if(n==1) { return 1;}
	else { return fib(n-1)+fib(n-2);}
}
int main(){
	long int n,k,m;
	cout<<"Enter term of fibonacci sequence:";
	cin>>m;
	cout<<"Fibonacci sequence is: "<<endl;
	for(n=0;n<m;n++){
		k=fib(n);
		cout<<k<<"\t";
	}
}
