#include<iostream>
using namespace std;
long int power(long int n,long int a){
	if(a==0) { return 1;}
	else { return n*power(n,a-1);}
}
int main(){
	long int n,a;
	cout<<"Enter number and power:";
	cin>>n>>a;
	cout<<"Power is: "<<power(n,a);
}
