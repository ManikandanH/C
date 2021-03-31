#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

class Account {
    public:
        virtual void withdraw(double amount) const {
            cout<<"Withdraw Amount in base class Account"<<amount<<endl;
        }
        virtual ~Account() {};
};

class SavingsAccount: public Account {
    public:
        virtual void withdraw(double amount) const override { //Adding override keyword to produce compile time issues if the base class virtual function signature is different when overriding
            cout<<"Withdraw Amount in Derived class SavingsAccount"<<amount<<endl;
        }
        virtual ~SavingsAccount() {};
};


int main(){
    SavingsAccount a;
    Account &base_acc = a;
    base_acc.withdraw(12.12);
    return 0;
}