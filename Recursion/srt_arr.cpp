#include<iostream>
using namespace std;
bool isSorted(int arr[], int size)
{
    // base case
    if(size == 0 || size == 1)
    {
        return true;
    }

    if(arr[0] > arr[1])
    {
        return false;
    }else{
        // recursive Call
        bool ans = isSorted(arr + 1, size - 1);
        return ans;
    }
}
int main()
{
    int arr[] = {3,7,8,9,1};
    int size = 5;
    bool ans = isSorted(arr, size);
    if(ans)
    {
        cout << " Array is Sorted" << endl;
    }else{
        cout << " Array is Not Sorted" << endl;
    }
    return 0;
}