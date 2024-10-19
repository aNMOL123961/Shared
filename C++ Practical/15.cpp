#include<iostream>
using namespace std;
class distance1{
	int inch,feet;
	public:
	distance1(int f,int i){
		feet=f;
		inch=i;
	}
	display(){
		cout<<"Feet: "<<feet<<endl;
		cout<<"Inch: "<<inch<<endl;
	}
	int add(distance1 d1, distance1 d2){
		feet=d1.feet+d2.feet;
		inch=d1.inch+d2.inch;
		feet+=inch/12;
		inch%=12;
	}
};
int main(){
	distance1 d1(5,7),d2(7,6),d3(0,0);
	d1.display();
	d2.display();
	d3.add(d1,d2);
	d3.display();
	return 0;
}
