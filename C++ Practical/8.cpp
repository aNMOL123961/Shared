#include<iostream>
#include<string>
using namespace std;
void message(int num, const string&msg="Default string"){
	cout<<"Number: "<<num<<" Message: "<<msg<<endl;
}
int main(){
	message(69);
	message(420,"Hello!!");
	return 0;
}
