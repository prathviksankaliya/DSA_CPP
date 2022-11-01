#include<iostream>
using namespace std;
void print(int n)
{
    // Base Case
    if(n == 0)
    {
        return ;
    }

    // Recursive Fun
    print(n-1);
    
    //  Print All Digits.
    cout << n << endl;
}
int main()
{
    int n;
    cin >> n;

    print(n);
    return 0;
}