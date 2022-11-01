#include<iostream>
using namespace std;
int arrSum(int size, int arr[])
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        int temp = arr[i];
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    int ans = arrSum(5, arr);
    cout << ans << endl;
    return 0;
}