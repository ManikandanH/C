#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void display(const int *const first_add, size_t size);
int *create_array(size_t size, int initial_value);

int main(){
    size_t size {0};
    int initial_value {0};
    int *array_ptr{nullptr};

    cout<<"::PROGRAM ABOUT CREATING DYNAMIC ARRAY USING RETURN VALUE OF POINTER FUNCTION::"<<endl;
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<endl<<"Enter the initial value for all the array positions: ";
    cin>>initial_value;

    array_ptr = create_array(size, initial_value);
    display(array_ptr, size);
    delete [] array_ptr;
    return 0;
}

int *create_array(size_t size, int initial_value){
    int *initial_add {nullptr};
    initial_add = new int[size];
    for(int i=0;i<size;i++){
        *(initial_add + i) = initial_value; // same as ===> initial_add[i] 
    }
    return initial_add;
}

void display(const int *const first_add, size_t size){
    for(int i=0;i<size;i++){
        cout<<"Index: "<<i<<"==>"<<*first_add<<endl;
    }
}