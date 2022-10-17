#include<iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter any Number : "<< endl;
    cin >> number;
    string str = to_string(number);

    swap(str.front(), str.back());

    cout << stoi(str)<< endl;

    // 2nd approch
    int lastNumber = number % 10;
    int temp = number;
    int count= 0;
    while(number >= 10)
    {
        number = number /10;
        count++;
    }
    int firstNumber = number;

    cout << lastNumber << " " <<firstNumber << endl;
    swap(firstNumber, lastNumber);
    cout << lastNumber << " " <<firstNumber << " " <<count << endl;
    count += 1;
    
    number = temp - firstNumber + lastNumber;
    cout << number << endl; 
    return 0;
}