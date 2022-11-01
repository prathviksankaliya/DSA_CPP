#include<iostream>
using namespace std;

int factorial(int n)
{
    // Base Case 
    if(n == 0)
    {
        return 1;
    } 

    // Recursive Fun
    return n * factorial(n-1);
}
int main()
{
    int n;
    cin >> n;

    cout << factorial(n) << endl;
    return 0;
}