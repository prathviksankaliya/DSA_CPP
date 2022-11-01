#include<iostream>
#include<queue>

using namespace std;

int main()
{
    // inilization of stack
    queue<int> q;

    // push(): push elm in stack.
    q.push(10);
    q.push(12);
    q.push(24);
    q.push(4);

    // pop(): pop elm in stack.
    q.pop();

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    
    return 0;
}