#include <iostream>
using namespace std;
class BankAccount {
private:
    int accNum;
    int bal;
public:
    BankAccount(int a, int b){
    	accNum=a;
    	bal=b;
	}
    deposit(int amount){
        bal += amount;
        cout << "Deposited: " << amount << endl;
	}
    withdraw(int amount){
        bal -= amount;
        cout << "Withdrew: " << amount << endl;	
	}
    display(){
    cout << "Account Number: " << accNum << endl;
    cout << "Balance: " << bal << endl;	
	}
};
int main(){
    BankAccount myAccount(111416, 1000.0);
    myAccount.display();
    myAccount.deposit(500.0);
    myAccount.display();
    myAccount.withdraw(200.0);
    myAccount.display();
    return 0;
}

