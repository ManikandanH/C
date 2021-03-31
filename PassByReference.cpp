#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

void change_num(int &num);
string change_string(string &s);

int main(){
    int num1 = 10;
    string s {"Manikandan Arjunan"};
    cout<<"Before changing: "<<num1<<endl;
    change_num(num1);
    cout<<"After Changing: "<<num1<<endl;
    cout<<"Before Changing: "<<s<<endl;
    cout<<"After Changing: "<<change_string(s)<<endl;
    return 0;
}

void change_num(int &num){
    num = 100;
}

inline string change_string(string &s){
    s += " Changed";
    return s;
}