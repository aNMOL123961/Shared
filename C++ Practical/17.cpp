#include<iostream>
using namespace std;
class complex{
	int real,img;
	public:
	getdata(){
		cout<<"Enter Real and Imaginary number:"<<endl;
		cin>>real>>img;
	}
	display(){
		cout<<"Sum is :"<<real<<"+"<<img<<"i";
	}
	int add(complex c1, complex c2){
		real=c1.real+c2.real;
		img=c1.img+c2.img;
	}
};
int main(){
	complex c1,c2,c3;
	c1.getdata();
	c2.getdata();
	c3.add(c1,c2);
	c3.display();
	return 0;
}
