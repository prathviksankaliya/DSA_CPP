#include<iostream>
using namespace std;
int n_sum(int arr[], int size)
{
    // Base case
    if(size == 0)
    {
        return 0;
    }

    if(size == 1)
    {
        return arr[0];
    }else{
        // Reverse Order
        // array start with 0 so size - 1;
        // return arr[size - 1] + n_sum(arr, size - 1);
        
        // Front Order
        return arr[0] + n_sum(arr + 1, size - 1);
    }
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int size = 5;

    int sum = n_sum(arr, size);
    cout << sum << endl;
    return 0;
}