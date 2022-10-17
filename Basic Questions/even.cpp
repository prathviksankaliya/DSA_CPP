#include<iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter Number : "<< endl;
    cin >> number;

    for(int i = 2; i <= number; i+=2)
    {
        cout << i << endl;
    }
    return 0;
}