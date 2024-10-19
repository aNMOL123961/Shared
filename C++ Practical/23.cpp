#include <iostream>
using namespace std;
class Example {
    int value;
	public:
    Example(int val){
		value=val;
	}
    friend bool operator==(Example& obj1, Example& obj2);
};
bool operator==(Example& obj1, Example& obj2) {
    return obj1.value == obj2.value;
}
int main(){
    Example obj1(10);
    Example obj2(10);
    Example obj3(20);
    if (obj1 == obj2){
        cout<<"obj1 is equal to obj2"<<endl;
    } 
	else{
        cout<<"obj1 is not equal to obj2"<<endl;
    }
    if (obj1 == obj3){
        cout<<"obj1 is equal to obj3"<<endl;
    }
	else{
        cout<<"obj1 is not equal to obj3"<<endl;
    }
    return 0;
}
