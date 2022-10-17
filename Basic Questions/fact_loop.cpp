#include<iostream>
using namespace std;

int main()
{
    long long number;
    long long fact = 1;

    cout << "Enter the Number : " << endl;
    cin >> number; // 7

    while(number != 0)
    {
        fact = fact * number;
        number--;
    }

    cout << "Fact is : " << fact << endl;

    return 0;
}