#include<iostream>
#include<unordered_map>
using namespace std;
void sayDigit(int num)
{
    unordered_map<int, string> mp;

    mp[0] = "zero";
    mp[1] = "one";
    mp[2] = "two";
    mp[3] = "three";
    mp[4] = "four";
    mp[5] = "five";
    mp[6] = "six";
    mp[7] = "seven";
    mp[8] = "eight";
    mp[9] = "night";
    mp[10] = "ten";

    // Base case
    if(num == 0)
    {
       return; 
    }

    // processing
    int digit = num % 10;
    num/=10;

    // recursive Call
    sayDigit(num);

    cout << mp[digit] << endl;


}
int main()
{
    int num;
    cin>> num;
    
    sayDigit(num);
    return 0;
}