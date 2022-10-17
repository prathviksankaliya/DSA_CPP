#include<iostream>
using namespace std;

int main()
{   
    int startRange , lastRange;
    cout << "Enter The Number : " << endl;
    cin >> startRange;

    cout << "Last Range Of Armstrong : " << endl;
    cin >> lastRange;

    for(int i = startRange; i <= lastRange; i++)
    {
        int sum ,temp;
        sum = 0;
        temp = i;
        while (temp > 0)
        {
            int digit = temp % 10;
            sum += (digit * digit * digit);
            temp /= 10;
        }
        if(sum == i)
        {
            cout << sum << endl;
        } 
    }
    return 0;
}