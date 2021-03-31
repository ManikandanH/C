#include <iostream>
#include <memory>

using std::cout;
using std::shared_ptr;
using std::weak_ptr;
using std::endl;

class B;

class A {
    public:
        shared_ptr<B> bptr;

    public:
        A(){
            cout<<"Constructor called for A"<<endl;
        }
        void set_B(shared_ptr<B> &b){
            bptr = b;
        }
        ~A(){
            cout<<"Destructor Called for A"<<endl;
        }
};

class B {
    public:
        weak_ptr<A> aptr;
    
    public:
        B(){
            cout<<"Constructor called for B"<<endl;
        }
        void set_A(shared_ptr<A> &a){
            aptr = a;
        }
        ~B(){
            cout<<"Destructor called for B"<<endl;
        }
};

int main(){
    shared_ptr<A> a { new A()};
    shared_ptr<B> b { new B()};
    cout<<a<<endl;
    cout<<b<<endl;
    a->set_B(b);
    b->set_A(a);
    return 0;
}