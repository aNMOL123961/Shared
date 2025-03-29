#include<iostream>
#include<cmath>
using namespace std;
//#define f(x) (x*x+x-2)
#define g(x) (2-x*x)
#define E 0.0001
int main(){
	float x0, x1, f0;
	cout<<"Enter an initial guess:"<<endl;
	cin>>x0;
	calculate:
	x1=g(x0);
	if(fabs((x1-x0)/x1)<=E){
		cout<<x1<<" is root.";
	}
	else{
		x0=x1;
		goto calculate;
	}
	return 0;
}
