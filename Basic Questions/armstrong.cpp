#include<iostream>
using namespace std;

int main()
{
    int number,temp ,sum;
    sum = 0;
    cout << "Enter The Number :" << endl;
    cin >> number;

    temp = number;

    // 153
    while (number > 0)
    {
        int digit = number % 10;
        sum += (digit *digit  *digit);
        number/= 10; 
    }
    
    if(sum == temp)
    {
        cout << "Number is Armstrong !!"<< endl;
    }else{
        cout << "Number is Not a Armstrong Number !! " << endl;
    }
    
    return 0;
}