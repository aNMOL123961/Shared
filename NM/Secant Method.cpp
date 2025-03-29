#include<iostream>
#include<cmath>
using namespace std;
#define f(x) (x*x-4*x-10)
#define E 0.0001
int main(){
	float x1, x2, x3, f0, f1, f2;
	cout<<"Enter two initial guesses:"<<endl;
	cin>>x1>>x2;
	calculate:
	f1=f(x1);
	f2=f(x2);
	x3=x2-(f2*(x2-x1)/(f2-f1));
	if(fabs((x3-x2)/x3)<=E){
		cout<<x3<<" is root.";
	}
	else{
		x1=x2;
		x2=x3;
		goto calculate;
	}
	return 0;
}
