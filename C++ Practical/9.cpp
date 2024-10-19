#include <iostream>
using namespace std;
int globalVar = 10;
void staticExample(){
    static int staticVar = 5;
     cout << "Inside staticExample(): staticVar = " << staticVar <<  endl;
    staticVar++;
}

int main(){
    auto int localVar = 7;
     cout << "Local variable (auto): localVar = " << localVar <<  endl;
    staticExample();  
    staticExample(); 
     cout << "Global variable (extern): globalVar = " << globalVar <<  endl;
    return 0;
}

