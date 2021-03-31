#include <iostream>

using std::cout;
using std::endl;

int main(){
    int arr[10] {10,30,40,50};
    int temp1, temp2;
    // for(int i=0;i<10;i++){
    //     cout<<arr[i]<<endl;
    // }
    for(int i=1;i<10;i++){
        if(3 <= i-1){
            if(3 == i-1){
                temp1 = arr[i-1];
                arr[i-1] = 90;
                temp2 = arr[i];
                arr[i] = temp1;
            } else {
                temp1 = arr[i];
                arr[i] = temp2;
                temp2 = temp1;
            }
        }
    }
     for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}