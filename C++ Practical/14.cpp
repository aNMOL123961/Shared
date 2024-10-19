#include<iostream>
using namespace std;
class Room{
	int length,width,total;
	public:
	getdata(){
		cout<<"Enter Length and Width:"<<endl;
		cin>>length>>width;
	}
	display(){
		cout<<"Area: "<<total;
	}
	area(){
		total=length*width;
	}
};
int main(){
	Room c1;
	c1.getdata();
	c1.area();
	c1.display();
	return 0;
}
