#include<iostream>
using namespace std;
int main(){
	int a,b,r;
	cout<<"Enter two numbers:"<<endl;
	cin>>a>>b;
	while(b>0){
	r=a%b;
	a=b;
	b=r;
	}
	cout<<"GCD is:"<<a;
}
