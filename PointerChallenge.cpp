#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void print(int *array, size_t size);
int *apply_all(int *array_1, size_t size_array1, int *array_2, size_t size_array2);

int main()
{
    int array_1[]{1, 2, 3, 4, 5};
    int array_2[]{10, 9, 1, 7, 1, 5};
    int *result_array_ptr{nullptr};
    cout << "::FIRST ARRAY::" << endl;
    print(array_1, 5);
    cout << "::SECOND ARRAY::" << endl;
    print(array_2, 6);
    result_array_ptr = apply_all(array_1, 5, array_2, 6);
    print(result_array_ptr, 30);
    delete [] result_array_ptr;
    return 0;
}

void print(int *array, size_t size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Index: " << i << " ===> " << *(array + i) << endl;
    }
}

int *apply_all(int *array_1, size_t size_array1, int *array_2, size_t size_array2)
{
    size_t total_size = size_array1 * size_array2;
    size_t temp_size = 0;
    int *array_ptr{nullptr};
    array_ptr = new int[total_size];
    for (int i = 0; i < size_array2; i++)
    {
        for (int j = 0; j < size_array1; j++)
        {
            *(array_ptr + temp_size) = *(array_2 + i) * *(array_1 + j);
            temp_size++;
        }
    }
    return array_ptr;
}