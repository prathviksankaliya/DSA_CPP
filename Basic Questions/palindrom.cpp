#include<iostream>
using namespace std;

int main()
{
    int number,temp, sum;
    sum =0;
    cout << "Enter The NUmber : " << endl;
    cin >> number;

    temp = number;

    while (number > 0)
    {
        int digit = number % 10;
        sum = (sum * 10 )+ digit;
        number /=10; 
    }
    
    if(temp == sum)
    {
        cout << "Peleindrom !!"  << endl;
    }else{
        cout << "Not Palindrome!!" << endl;
    }
    return 0;
}