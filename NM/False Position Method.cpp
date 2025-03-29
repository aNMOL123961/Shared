#include<iostream>
#include<cmath>
using namespace std;
#define f(x) (x*x-x-2)
#define E 0.0001
int main(){
	float x0, x1, x2, f0, f1, f2;
	start:
	cout<<"Enter two initial guesses:"<<endl;
	cin>>x1>>x2;
	f1=f(x1);
	f2=f(x2);
	if((f1*f2)>=0){
		cout<<"Root doesn't converge, Choose other values."<<endl;
		goto start;
	}
	calculate:
	x0=x1-(f1*(x2-x1)/(f2-f1));
	f0=f(x0);
	if(f0==0){
		cout<<x0<<" is root.";
		goto last;
	}
	else if (f(x0)*f(x1)<0)
		x2=x0;
	else if (f(x0)*f(x2)<0)
		x1=x0;
	if(fabs((x2-x1)/x2)<=E){
		cout<<x0<<" is root.";
	}
	else{
		goto calculate;
	}
	last:
	return 0;
}
