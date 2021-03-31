#include <iostream>
#include <cstdlib>
#include <ctime>

using std::srand;
using std::time;
using std::rand;
using std::cout;
using std::cin;
using std::endl;

int main(){
    int random_number {};
    size_t n {0};
    int min;
    int max;
    
    cout<<"Enter number of times that a random number should generate: ";
    cin>>n;
    
    cout<<"Enter Min and Max for the range of the random number: ";
    cin>>min>>max;
    
    if(max > RAND_MAX){
        cout<<"Please Enter Max range below "<<RAND_MAX<<endl;
        cout<<"Max Value: ";
        cin>>max;
    }
    srand(time(nullptr));
    cout<<"List of Random Numbers below"<<endl;
    for(int i=0;i<n;i++){
        random_number = rand() % max + min;
        cout<<random_number<<endl;
    }
    return 0;
}