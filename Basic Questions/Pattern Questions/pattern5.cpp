#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    for(int row = 1; row <=n; row++)
    {
        int totalCols, spaces;
        int cols = 2*n -1;
        if(n < row)
        {
            totalCols = row - n;
            spaces = 2*n - row;
        }else{
            totalCols = row;
            spaces =  n - row;
        }
        for(int space = 1; space <= 2*n-1; space++)
        {
            
            cout<< " ";
        }
        for(int col = 1; col <= 2*n - 1; col++)
        {
            
            cout << "* ";    
        }
            cout << endl;
    }

    // for (int row = 1; row <= n; row++)
    // {
    //     for(int space = 1; space <= n - row; space++)
    //     {
    //         cout << " ";
    //     }
    //     for (int cols = 1; cols <= row; cols++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // for (int row = n; row >= 1; row--)
    // {
    //     for(int space = 1; space <= n - row; space++)
    //     {
    //         cout << " ";
    //     }
    //     for (int cols = 1; cols <= row; cols++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    

    return 0;
}