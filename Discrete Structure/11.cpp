#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,d,x,y,q,r;
	cout<<"Enter two numbers:"<<endl;
	cin>>a>>b;
	int x2=1,x1=0,y2=0,y1=1;
	while(b>0){
	q=floor(a/b);
	r=a-(q*b);
	x=x2-(q*x1);
	y=y2-(q*y1);
	a=b;b=r;x2=x1;y2=y1;
	x1=x;y1=y;
	}
	d=a;x=x2;y=y2;
	cout<<"GCD is:"<<a<<endl;
}
