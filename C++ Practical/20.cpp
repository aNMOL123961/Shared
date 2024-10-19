#include <iostream>
using namespace std;
class Example {
	private:
    int value;
	public:
    Example(){
        cout<<"Default constructor called."<<endl;
    }
    Example(int val){
    	value=val;
        cout<<"Parameterized constructor called. Value: "<<value<<endl;
    }
    Example(Example &obj){
    	value=obj.value;
        cout<<"Copy constructor called. Value: "<<value<<endl;
    }
};
int main() {
    Example obj1;
    Example obj2(42);
    Example obj3 = obj2;
    return 0;
}

