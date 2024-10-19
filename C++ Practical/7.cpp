#include<iostream>
using namespace std;
int add(int a, int b){
	return a+b;
}
int add(int a, int b, int c){
	return a+b+c;
}
int main(){
	int a, b, c;
	cout<<"Enter three numbers:"<<endl;
	cin>>a>>b>>c;
	cout<<"Sum of first two numbers: "<<add(a,b)<<endl;
	cout<<"Sum of three numbers: "<<add(a,b,c);
	return 0;
}
