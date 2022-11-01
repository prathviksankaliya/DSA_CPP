#include<iostream>
using namespace std;
bool linearSearch(int arr[], int key, int size)
{
    // Base case
    if(size == 0)
    {
        return false;
    }

    // recursive Call
    if(arr[0] == key)
    {
        return true;
    }else{
        return linearSearch(arr+1, key, size-1);
    }
      
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int size = 5;
    int key = 3;
    bool ans = linearSearch(arr, key, size);
    if(ans)
    {
        cout << "Key is Found" << endl;
    }else{
        cout << "Key is Not Found" << endl;
    }
    return 0;
}