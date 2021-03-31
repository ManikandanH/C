#include <iostream>
#include <memory>

using std::cout;
using std::endl;
using std::unique_ptr;
using std::make_unique;

class Test {
    public:
        int amount;
    public:
        Test(): amount{0} {
            cout<<"Test class constructor called"<<endl;
        }
        Test(int amt): amount{amt} {
            cout<<"Test class Single constructor called"<<endl;
        }
        int get_data() const { 
            return amount;
        }
        ~Test(){ 
            cout<<"Test destructor called"<<endl;
        }
};

int main(){
    int *ptr = nullptr;
    ptr = new int(2);
    unique_ptr<int> a { new int { 2 }};
    cout<<*a<<endl;
    cout<<ptr<<endl;
    unique_ptr<Test> t1 = make_unique<Test>(20); // same as new Test(20) for pointer
    cout<<t1->get_data()<<endl;
    delete ptr;
    return 0;
}