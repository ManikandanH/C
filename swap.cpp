#include <iostream>

using namespace std;

void swap(int &a, int &b);
void swap_ptr(int *a, int *b);

int main(){
    int a {10};
    int b {20};
    cout<<"BEFORE SWAPPING: "<<a<<b<<endl;
    swap(a, b);
    swap_ptr(&a, &b);
    cout<<"AFTER SWAPPING: "<<a<<b<<endl;
    return 0;
}

void swap(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}

void swap_ptr(int *a, int *b){
    cout<<a<<" "<<b<<endl;
    a = {nullptr};
    cout<<a<<" "<<b<<endl;
}