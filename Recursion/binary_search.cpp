#include<iostream>
using namespace std;
bool BinarySearch(int *arr, int s, int e, int key)
{
    int mid = s + (e - s)/2;
    // Base case
    if(s > e)
    {
        return false;
    }
    
    if(arr[mid] == key)
    {
        return true;
    }

    if(key > arr[mid])
    {
        return BinarySearch(arr, mid + 1, e, key);
    }else{
        return BinarySearch(arr, s, mid - 1, key);
    }

}
int main()
{
    int arr[] = {2,4,6,10,14,18};
    int size = 6;
    bool ans = BinarySearch(arr, 0, 5, 182);
    if(ans)
    {
        cout << "key is Found!!" << endl;
    }else{
        cout << "key is Not Found!!" << endl;
    }

}