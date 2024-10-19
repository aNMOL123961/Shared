#include<iostream>
using namespace std;
double result(int x,int y, char z){
	switch(z){
		case'+':
		return x+y;
		case'-':
		return x-y;
		case'*':
		return x*y;
		case'/':
		return x/y;
		default:
		cout<<"Invalid Action.";
	}
}
int main(){
	int a,b;
	char c;
	cout<<"Enter two numbers:"<<endl;
	cin>>a>>b;
	cout<<"Enter an operation:"<<endl;
	cin>>c;
	cout<<"The answer is: "<<result(a,b,c);
	return 0;
}
