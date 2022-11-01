#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size, int key)
{
    for(int i = 0; i <= size; i++)
    {
        if(arr[i] == key)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[10] = {5,7,-2,10,22,-2,0,5,22,1};
    bool ans = linearSearch(arr, 10, 1);
    if(ans)
    {
        cout << "Key is Present in Array!!" << endl;
    }
    else{
        cout << "Key is Not Present in Array!!" << endl;
    }
    return 0;
}