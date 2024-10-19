#include<iostream>
using namespace std;
class sample{
	int x;
	public:
	sample(int i){
		x=i;
		cout<<"Creating class "<<x<<endl;
	}
	~sample(){
		cout<<"Destroying class "<<x<<endl;
	}
};
int main(){
	sample s1(1),s2(2),s3(3);
	return 0;
}
