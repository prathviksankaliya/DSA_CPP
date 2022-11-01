#include<iostream>
using namespace std;

void revArr(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while(start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}

void printArr(int arr[], int size)
{
    for(int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[6] = {1,2,3,4,5,6};
    revArr(arr, 6);
    printArr(arr, 6);
    return 0;
}