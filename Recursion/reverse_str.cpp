#include<iostream>
using namespace std;
void reverse_str(string &str,int i , int j)
{
    // Base Case
    if(i > j)
    {
        return;
    }

    // Process
    swap(str[i], str[j]);
    i++;
    j--;

    // Recursive Functions
    reverse_str(str, i, j);
}
int main()
{

    string name = "ABCDE";

    reverse_str(name, 0, name.size() - 1);

    cout << name << endl;
}