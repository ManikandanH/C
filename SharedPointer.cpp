#include <iostream>
#include <memory>

using std::cout;
using std::endl;
using std::shared_ptr;
using std::make_shared;

class Test {
    private: 
        int age;
    public:
        Test(): age{0} {
            cout<<"Test class constructor"<<endl;
        }
        Test(int age): age{age} {
            cout<<"Test class single argument constructor"<<endl;
        }
        int get_age() const {
            return age;
        }
        ~Test(){
            cout<<"Test destructor called"<<endl;
        }
};

int main(){
    shared_ptr<Test> t1 { new Test(12) };
    shared_ptr<Test> t2;
    t2 = t1;
    cout<<t2->get_age()<<endl;
    cout<<t1<<endl;
    cout<<t2<<endl;
    cout<<t1->get_age()<<endl;
    // shared_ptr<int> s1 { new int { 2 }};
    // shared_ptr<int> s2;
    // shared_ptr<int> s3;
    // s2 = s1;
    // s3 = s2;
    // s2.reset();
    // cout<<s2<<endl;
    // cout<<s1<<endl;
    // cout<<s3<<endl;
    // cout<<s1.use_count()<<endl;
    return 0;
}