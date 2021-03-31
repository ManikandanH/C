#include <iostream>
#include <string>

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
        
        Shallow(const Shallow &src) :Shallow(*(src.data)) {} //Deep copy
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
    Shallow s1{100};
    cout<<s1.get_data()<<endl;
    copy(s1);
    cout<<s1.get_data()<<endl;
    return 0;
}