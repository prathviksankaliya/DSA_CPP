#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    for(int i = 0; i<n; i++)
    {
        for(int k = n; k > i+1; k--)
        {
            cout <<" ";
        }
        for(int j = 0; j<=i; j++)
        {
            cout <<"*";
        }  
        cout << endl; 
    }
    return 0;
}