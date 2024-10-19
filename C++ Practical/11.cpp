#include <iostream>
#include <string>
using namespace std;
string& func(string& str){
    str += " and Bye.";
    return str;
}

int main() {
    string myString = "Hello";
    cout << "Original string: " << myString <<endl;
    cout << "Returned string: " << func(myString);
    return 0;
}

