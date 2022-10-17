#include<iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter Number :" << endl;
    cin >> number;

    int lastNumber = number % 10;
    while(number >= 10)
    {
        number = number / 10;
    }
    int firstNumber = number;
    // cout << "Last Namuber :" << lastNumber << " First number " << firstNumber << endl;

    cout << "First and Last Digit sum is : " << firstNumber + lastNumber << endl;



}