#include <iostream>
using namespace std;
class Distance {
    	int f;
    	float i;
	public:
    	Distance(int f, float i){
		this->f=f;
		this->i=i;
		}
    	void display(){
     	   cout << f << " feet and " << i << " inches" << endl;
    	}
    	friend class Length;
	};
class Length {
    	int m;
    	float cm;
	public:
    	Length(int m, float cm){
			this->m=m;
			this->cm=cm;
		}
    	Length(Distance& d){
        	float inch = d.f*12+d.i;
        	int cemtr = inch*2.54;
        	m = cemtr/100;
        	cm = cemtr-m*100;
    	}
    	void display() {
        	cout << m << " meters and " << cm << " centimeters" << endl;
    	}
};
int main() {
    Distance d1(10, 6.5);
    cout << "Original distance: ";
    d1.display();
    Length l1 = d1;
    cout << "Converted length: ";
    l1.display();
    return 0;
}
