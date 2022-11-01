#include<iostream>
using namespace std;

void swapAltnateArray(int arr[], int size)
{
    for(int i = 0; i < size; i+=2)
    {
        if(i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
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
    swapAltnateArray(arr, 6);
    printArr(arr, 6);
    return 0;
}