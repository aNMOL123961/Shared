#include <iostream>
using namespace std;
class B;
class A {
    int x;
	public:
    A(int val){
	x=val;
	}
	display(){
		cout<<"Value of A: "<<x<<endl;
	}
    friend int swap(A&, B&);
};
class B {
    int y;
	public:
    B(int val){
	y=val;
	}
	display(){
		cout<<"Value of B: "<<y<<endl;
	}
    friend int swap(A&, B&);
};
int swap(A& objA, B& objB){
    int temp = objA.x;
    objA.x = objB.y;
    objB.y = temp;
}
int main() {
    A objA(10);
    B objB(20);
    objA.display();
    objB.display();
    swap(objA,objB);
    objA.display();
    objB.display();
    return 0;
}
