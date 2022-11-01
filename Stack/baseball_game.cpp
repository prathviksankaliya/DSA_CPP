#include<bits/stdc++.h>
using namespace std;

int baseballGame(vector<string>& ops)
{
    if(ops.empty() )
    {
        return 0;
    }
    stack<int> s;
    int ans = 0;

    for(int i = 0; i < ops.size(); i++)
    {   
        if(ops[i] == "+")
        {
            int tempFirst = s.top();
            s.pop();
            int tempSec = s.top();
            s.push(tempFirst);
            s.push(tempFirst + tempSec);
            ans = ans + tempFirst + tempSec;
        }else if(ops[i] == "D")
        {
            ans = ans + (2 * s.top());
            s.push(2 * s.top());
        }else if(!s.empty() && ops[i] == "C"){
            ans -= s.top();
            s.pop();
        }else{
            s.push(stoi(ops[i]));
            ans = ans + stoi(ops[i]);
        }
    }
    return ans;
}

int main()
{
    vector<string> points = {"5","2","C","D","+"};
    int ans = baseballGame(points);

    cout << ans << endl;
}