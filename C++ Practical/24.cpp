#include <iostream>
using namespace std;
class Distance {
    	int feet,inch;
	public:
    Distance(int f, int i){
    	feet=f;
    	inch=i;
	}
    Distance operator-(){
        return Distance(-feet, -inch);
    }
    void display(){
        cout<<"Feet: "<<feet<<endl;
		cout<<"Inches: "<<inch<<endl;
    }
};
int main(){
    Distance d1(5, 10);
    cout << "Original distance:"<<endl;
    d1.display();
	Distance d2 = -d1;
    cout<<"Inverted distance: "<<endl;
    d2.display();
    return 0;
}
