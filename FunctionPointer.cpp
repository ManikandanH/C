#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;

void display(vector<string> *s);
void display(int *numbers);

int main(){
    vector<string> string_names{"Manikandan", "Arjunan"};
    int scores[] {80, 50, 70};
    display(&string_names);
    display(scores);
    return 0;
}

void display(vector<string> *s){
    for(int i=0;i<(*s).size();i++){
        cout<<(*s)[i];
    }
}

void display(int *numbers){
    cout<<numbers<<endl;
    cout<<*numbers<<endl;
    cout<<*(numbers + 1)<<endl;
}