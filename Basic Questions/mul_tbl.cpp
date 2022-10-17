#include<iostream>
using namespace std;

int main()
{

    int number;

    cout << "Enter Your Mul table Number: "<< endl;
    cin >> number;

    if(!number <= 0)
    {
        for(int i = 1; i <= 10; i++)
        {
            cout << number << " * " << i << " = " << number * i << endl;
        } 
    }
    return 0;
}