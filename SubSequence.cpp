#include <iostream>

using std::cout;
using std::endl;

void findSequence(int *arr, size_t size)
{
    int sum = 0;
    int sum2 = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {   
            sum = 0;
            for (int k = i; k <= j; k++)
            {
                // sum += *(arr + k);
                // cout<<sum<<endl;
                cout<<*(arr + k)<<" ";
            }
            cout<<endl;
            sum2 += sum;
        }
    }

    // cout<<sum2<<endl;
}

int main()
{
    int arr_seq[]{1, 2, 3, 4};
    // cout<<sizeof(arr_seq)/sizeof(arr_seq[0]);
    findSequence(arr_seq, 4);
    return 0;
}