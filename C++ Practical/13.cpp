#include<iostream>
using namespace std;
class Intrest{
	int principal,time,rate,SI;
	public:
	getdata(){
		cout<<"Enter Principal,Time,Rate:"<<endl;
		cin>>principal>>time>>rate;
	}
	display(){
		cout<<"Principal: "<<principal<<endl;
		cout<<"Time: "<<time<<endl;
		cout<<"Rate: "<<rate<<endl;
		cout<<"Simple Intrest: "<<SI<<endl;
	}
	findinterest(){
		SI=principal*time*rate/100;
	}
};
int main(){
	Intrest c1;
	c1.getdata();
	c1.findinterest();
	c1.display();
	return 0;
}
