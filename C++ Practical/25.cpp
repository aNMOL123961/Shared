#include <iostream>
using namespace std;
class Length {
    int m,cm;
	public:
    Length(int meter, int centimeter){
		m=meter;
		cm=centimeter;
	}
    Length operator+(Length& a2){
    	Length a3(0,0);
        a3.m+=m+a2.m;
        a3.cm+=cm+a2.cm;
        a3.m+=a3.cm/100;
        a3.cm%=100;
        return a3;
    }
    void display() {
        cout <<m<<"."<<cm<<"meters"<<endl;
    }
};
int main() {
    Length L1(3,75),L2(2,50),L3(0,0);
    L1.display();
    L2.display();
    cout<<"Sum is :"<<endl;
	L3 = L1 + L2;
    L3.display();
    return 0;
}
