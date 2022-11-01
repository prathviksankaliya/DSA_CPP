#include<iostream>
#include<stack>

using namespace std;

int main()
{
    // inilization of stack
    stack<int> s;

    // push(): push elm in stack.
    s.push(10);
    s.push(12);
    s.push(24);
    s.push(4);

    // pop(): pop elm in stack.
    s.pop();

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    
    return 0;
}