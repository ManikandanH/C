#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int scores[] {70, 80, 50};
    int *score_ptr{nullptr};
    char characters[] {'a','b','n'};
    char *characters_ptr{nullptr};
    double double_numbers[] {12.12,123.4,123.1};
    double *double_numbers_ptr{nullptr};
    double_numbers_ptr = double_numbers;
    characters_ptr = characters;
    score_ptr = scores;

    //Scores array name and score-ptr will be same which holds the address of the first array value.
    cout<<scores<<endl;
    cout<<score_ptr<<endl;
    cout<<score_ptr + 1<<endl;
    cout<<sizeof score_ptr<<endl;
    cout<<sizeof *score_ptr<<endl;
    cout<<"=================================================="<<endl;
    cout<<double_numbers<<endl;
    cout<<double_numbers_ptr<<endl;
    cout<<double_numbers_ptr + 1<<endl;
    cout<<double_numbers_ptr + 2<<endl;
    cout<<sizeof double_numbers_ptr<<endl;
    cout<<sizeof *double_numbers_ptr<<endl;
    cout<<"=================================================="<<endl;
    cout<<characters<<endl;
    cout<<characters_ptr<<endl;
    cout<<characters_ptr + 1<<endl;
    cout<<characters_ptr + 2<<endl;
    return 0;
}