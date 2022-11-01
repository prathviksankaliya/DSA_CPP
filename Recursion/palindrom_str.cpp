#include<iostream>
using namespace std;
bool palindrom_str(string &str, int i , int j)
{
    // Base Case
    if(i > j)
    {
        return true;
    } 

    // Processx
    if(str[i] != str[j])
    {
        return false;
    }else{
        // Recursive Functions
        return palindrom_str(str, i+1, j-1);
    }
}
int main()
{
    string str = "abbccbba";

    bool ans = palindrom_str(str, 0, str.size()-1);

    if(ans)
    {
        cout << "Palindrom!!" << endl;
    }else{
         cout << "Not Palindrom" << endl;
    }

    return 0;
}