#include<iostream>
using namespace std;
class counter{
	static int x;
	public:
	counter(){
		x++;
	}
	display(){
		cout<<x<<" objects created."<<endl;
	}
};
int counter::x=0;
int main(){
	counter s1,s2,s3;
	s3.display();
	return 0;
}
