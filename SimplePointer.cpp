#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    int num {10};
    double dob_num {121.1};
    int* num_pointer {nullptr};
    double* dob_pointer {nullptr};
    num_pointer = &num;
    dob_pointer = &dob_num;
    cout<<"NUM: "<<num<<endl;
    cout<<"Address of NUM: "<<&num<<endl;
    cout<<"NUM pointer value: "<<num_pointer<<endl<<endl;
    cout<<"DOB_NUM: "<<dob_num<<endl;
    cout<<"Address of DOB_NUM: "<<&dob_num<<endl;
    cout<<"DOB_NUM pointer value: "<<dob_pointer<<endl<<endl;
    cout<<"SIZEOF NUM: "<<sizeof num_pointer<<endl;
    cout<<"SIZEOF DOB_NUM: "<<sizeof dob_pointer<<endl;
    return 0;
}