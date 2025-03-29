#include<iostream>
#include<cmath>
using namespace std;
#define f(x) (x*x-3*x+2)
#define g(x) (2*x-3)
#define E 0.0001
int main(){
	float x0, x1, f0, g0;
	cout<<"Enter an initial guess:"<<endl;
	cin>>x0;
	calculate:
	f0=f(x0);
	g0=g(x0);
	x1=x0-(f0/g0);
	if(fabs((x1-x0)/x1)<=E){
		cout<<x1<<" is root.";
	}
	else{
		x0=x1;
		goto calculate;
	}
	return 0;
}
