#include<iostream>
using namespace std;
sum(int x,int y){
	return x+y;
}
int main(){
	int a,b;
	cout<<"Enter two numbers:"<<endl;
	cin>>a>>b;
	cout<<"Sum is: "<<sum(a,b);
	return 0;
}
