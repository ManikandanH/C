
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    string s {};
    cout<<"Enter a string: ";
    cin>>s;
    
    for(size_t i=0;i<s.length();i++){ 
        int string_count = 0;
        for(size_t j=0;j<=s.length() + i;j++){
            if(j >= s.length()-i){
                if(j < s.length()){
                    cout<<s[string_count];
                    string_count++;
                } else if(j == s.length()){
                    cout<<s[string_count];
                }else{
                   //string_count = (string_count - 1 + s.length()) % s.length();
                   string_count--;
                   cout<<s[string_count];
                }  
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
//    cout<<s<<endl;
    return 0;
}




