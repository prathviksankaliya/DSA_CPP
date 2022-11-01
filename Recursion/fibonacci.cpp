#include<iostream>
using namespace std;
int fibonacciSeries(int n)
{
    // Base case 
    if(n == 0)
    {
        return 0;
    } 
    if(n == 1)
    {
        return 1;
    }
    int a = fibonacciSeries(n - 1);
    int b = fibonacciSeries(n - 2);

    return a + b;
}
int main()
{
    int n = 4;

    int ans = fibonacciSeries(n);

    cout << ans << endl;
    return 0;
}