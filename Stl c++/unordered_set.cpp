#include<iostream>
#include<unordered_set>

using namespace std;

int main()
{
    unordered_set<int> s;

    s.insert(12);
    s.insert(123);
    s.insert(13);
    s.insert(91);

    // cout << *s.begin() << endl;
    int key = 12;
    if(s.find(key) != s.end())
    {
        s.erase(key);
    }else{
        printf("no");
    }

    // cout << s.count(1231) << endl;
    // s.erase(s.begin());

    for(auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << endl;
    }

    
    return 0;
}