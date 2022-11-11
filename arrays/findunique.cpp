#include<iostream>
using namespace std;

int findUnique(int arr[], int n)
{
    // int ans= 0;

    // for (int i = 0; i < n; i++)
    // {
    //     ans = ans ^ arr[i];
    // }
    // return ans;

    // brute force
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count == 1)
        {
            return arr[i];
        }
        count = 0;
    }
}
int main()
{
    // int arr[7] = {7,5,1,3,7,3,5};

    // cout << findUnique(arr, 7) << endl;
    return 2+4;

}