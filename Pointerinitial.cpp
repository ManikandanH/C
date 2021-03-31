#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    int num {10};
    int *pointer {nullptr};
    string *p {nullptr};
    cout<<"Value of Variable num: "<<num<<endl; //Variable value num
    cout<<"Sizeof Variable num: "<<sizeof num<<endl; //Sizeof the variable
    cout<<"Address of Variable num: "<<&num<<endl; //Address of the variable num

    cout<<"Value of Pointer Variable: "<<pointer<<endl; //Pointer variable value
    cout<<"Sizeof pointer variable: "<<sizeof p<<endl; //Sizeof pointer variable
    cout<<"Sizeof pointer variable: "<<sizeof pointer<<endl; //Sizeof pointer variable
    cout<<"Address of the pointer variable: "<<&pointer<<endl; //Adress of the Pointer variable
    return 0;
}