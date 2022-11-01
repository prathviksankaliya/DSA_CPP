#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // Initilize Vector
    vector<int> v;

    // Vector Functions
    // 1. push_back(): insert elem into last pos of vector.
    v.push_back(10);
    v.push_back(11);
    v.push_back(122);

    // 2. front(): get first value of vector.
    // cout << v.front() << endl;

    // 3. back(): get last value of vector.
    // cout << v.back() << endl;

    // 4. insert(): insert ele into specify position vector.
    // v.insert(v.begin(), 13);

    // 5. access all elems of vector
    for(auto i = v.begin(); i != v.end(); i++)
    {
        cout<< *i << endl;
    }

    // 6. erase() : remove elem from given posotion.
    // v.erase(v.begin());

    // 7. pop_back(): remove elem from end of vector.
    v.pop_back(); 
    return 0;
}