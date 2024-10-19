#include <iostream>
using namespace std;
inline int greatest(int a, int b, int c){
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}
int main() {
    int x,y,z;
    cout << "Enter three integers: "<<endl;
    cin >> x >> y >> z;
    cout << "Greatest is " << greatest(x, y, z);
    return 0;
}

