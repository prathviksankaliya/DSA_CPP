#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    unordered_map<int, int> m;
    m.insert({1,10});
    m.insert({2,100});
    m.insert({3,2});
    m.insert({4,43});

    for (auto i = m.begin(); i != m.end(); i++)
    {
        cout << i -> first << " " << i -> second << endl;
    

    if(m.find(4) != m.end())
    {
        cout << i -> second << endl;
        printf("yes");
         break;
    }
    }
    


    
    return 0;
}