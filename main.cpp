#include <iostream>
using namespace std;

void sort(int arr[], int size)
{
    int tmp;
    for(int i = 0; i < size; ++i)
        for(int j = i; j < size; ++j)
        {
            if(arr[i] < arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
}

int main()
{
    int arr[] = {12,4,5,9,7,3,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr,size);
    for(int i = 0; i < size; ++i)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}