#include <iostream>
#include <cstring>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;

int main(){
    char first_name[20] {};
    char last_name[20] {};
    char full_name[40] {};
//    cout<<"Enter your First Name: ";
//    cin>>first_name;
//    cout<<endl;
//    
//    cout<<"Enter your Last Name: ";
//    cin>>last_name;
//    cout<<endl;
//    
//    cout<<"Your First name is "<<first_name<<" and your Last Name is "<<last_name<<endl<<endl;
//    strcat(full_name, first_name);
//    strcat(full_name, " ");
//    strcat(full_name, last_name);
//    cout<<"Your Full Name is : "<<full_name<<endl;
    
    cout<<"Enter your full Name: "<<endl;
    cin.getline(full_name, 40); //to get multi words usually input will terminate if it sees space. this behaviour is overrided by this function.
    cout<<"Your name is: "<<full_name<<endl;
    for(int i=0;i<strlen(full_name);i++){
        if(isalpha(full_name[i])){
            full_name[i] = toupper(full_name[i]);
        }
    }
     cout<<"Your name after changing to Uppercase: "<<full_name<<endl;
    return 0;
}