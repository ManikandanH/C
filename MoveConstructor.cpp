#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Shallow {
    private:
        int *data;

    public:
        Shallow(int d) {
            data = new int;
            *data = d;
            cout<<"Constructor called"<<endl;
        }

        ~Shallow(){
            delete data;
            cout<<"Destructor Called"<<endl;
        }

        // Shallow(const Shallow &src) :data{src.data} { } //Shallow Copy
        
        // Shallow(const Shallow &src) :Shallow(*(src.data)) {
        //     cout<<"copy deep constructor called for: "<<*(src.data)<<endl;
        // } //Deep copy
        Shallow(Shallow &&src) :data{src.data} {
            cout<<"Move deep constructor called for: "<<*(src.data)<<endl;
            src.data = nullptr;
        } //Move Constructor
        void set_data(int d){
            cout<<d<<endl;
            *data = d;
        }

        int get_data(){
            return *data;
        }
};

void copy(Shallow s3){
    s3.set_data(1000);
    cout<<"Shallow Called"<<s3.get_data()<<endl;
}

int main(){
    vector<Shallow> vec;
    vec.push_back(Shallow{10});
    vec.push_back(Shallow{20});
    vec.push_back(Shallow{30});
    vec.push_back(Shallow{40});
    vec.push_back(Shallow{50});
    vec.push_back(Shallow{60});
    return 0;
}