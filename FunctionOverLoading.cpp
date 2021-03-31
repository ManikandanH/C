#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void print(int a);
void print(double a);
void print(string s);

int main(){
    print(1);
    print(12.1);
    print("Manikandan Arjunan");
    return 0;
}

void print(int a){
    cout<<"Printing Int: "<<a;
}

void print(double a){
    cout<<"Printing Double: "<<a;
}

void print(string s){
    cout<<"Printing String: "<<s;
}