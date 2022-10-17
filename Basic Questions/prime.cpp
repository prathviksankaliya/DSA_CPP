// prime number = divisible by 1 or number it self is called prime 

#include<iostream>
using namespace std;

int main()
{
    int number, status;
    status = 0;

    cout << "Enter The any Number : " << endl;
    cin >> number;

    if(number <= 1)
    {
        status = 0; 
    }else{
        for (int i = 2; i <= number/2; i++)
        {
            if(number % i == 0)
            {
                status = 0;
                break;
            }else{
                 status = 1;
            }
        }
    }
    cout << status << endl;

    
    return 0;
}