#include "MyString.h"

using namespace std;

template<typename T>
void Sort(T* arr, unsigned int length_of_array)
{
    unsigned int sum = 0;
    for (int i = 0; i < length_of_array; i++)
    {
        sum += (unsigned int)arr[i];
    }

    if (length_of_array == 0) exit(-1);
    sum /= length_of_array;
    
    for (int i = 0; i < length_of_array; i++)
    {
        arr[i] = sum;
    }
}

inline void Sort(MyString& arr)
{
    unsigned int sum = 0;
    int length = arr.Lenght();

    for (int i = 0; i < length; i++)
    {
        sum += (unsigned int)arr[i];
    }

    if (length== 0) exit(-1);
    sum /= length;

    for (int i = 0; i < length; i++)
    {
        arr[i] = sum;
    }
}

