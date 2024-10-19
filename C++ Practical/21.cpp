#include <iostream>
using namespace std;
class B;
class A {
    int x;
	public:
    A(int val){
	x=val;
	}
    friend int add(A, B);
};
class B {
    int y;
	public:
    B(int val){
	y=val;
	}
    friend int add(A, B);
};
int add(A objA, B objB) {
    return objA.x + objB.y;
}
int main() {
    A objA(10);
    B objB(20);
    cout<<"Sum is: "<<add(objA, objB)<<endl;
    return 0;
}
