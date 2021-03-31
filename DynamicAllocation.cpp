#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int *int_ptr {nullptr};
    int *vect_ptr {nullptr};
    int scores[] {1, 2};
    cout<<&scores<<endl;
    cout<<scores<<endl;
    // size_t size;
    // int_ptr = new int;
    // cout<<int_ptr<<endl;

    // cout<<"Enter the size of your array: "<<endl;
    // cin>>size;
    // vect_ptr = new int[size];
    // cout<<vect_ptr<<endl;
    // cout<<(vect_ptr + 1)<<endl;
    return 0;
}