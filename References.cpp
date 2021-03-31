#include <iostream>
#include <vector>

using namespace std;

int main(){
    // int num {10};
    // int &ref {num}; // same as int *ref {&num}

    // cout<<&num<<endl;
    // cout<<ref<<endl;
    // cout<<&ref<<endl;
    int sum {10};
    int *sum_ptr{&sum};
    int &ref_ptr {*sum_ptr};

    cout<<sum<<endl;
    cout<<*sum_ptr<<endl;
    cout<<ref_ptr<<endl;
    
    // sum = 120;
    // *sum_ptr = 120;
    ref_ptr = 12312;

    cout<<sum<<endl;
    cout<<*sum_ptr<<endl;
    cout<<ref_ptr<<endl;

    cout<<"::ADDRESSESS::"<<endl;
    cout<<&sum<<endl;
    cout<<&sum_ptr<<endl;
    cout<<&ref_ptr;
    return 0;
}