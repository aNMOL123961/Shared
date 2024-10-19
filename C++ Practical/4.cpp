#include<iostream>
using namespace std;
int main(){
	int i, sum = 0;
	int num[5];
	cout<<"Enter 5 numbers:"<<endl;
	for(i=0;i<5;i++){
		cin>>num[i];
		sum += num[i];
	}
	cout<<"Sum is: "<<sum;
	return 0;
}
