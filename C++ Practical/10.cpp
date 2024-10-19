#include<iostream>
using namespace std;
int* pointer(int num){
	int* ptr= new int;
	*ptr = num;
	return ptr;
}
int main(){
	int num=69;
	int* numptr= pointer(num);
	cout<<"The value is: "<<*numptr;
	delete numptr;
	return 0;
}
