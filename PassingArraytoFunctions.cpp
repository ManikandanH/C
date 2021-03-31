#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void pass_by_array(int arr [], size_t size);

void pass_by_array(int arr [], size_t size){
    cout<<arr;
}

int main(){
    int array_of_numbers[] {1,2,3,4,5};
    // cout<<array_of_numbers;
    pass_by_array(array_of_numbers, 5);
    return 0;
}