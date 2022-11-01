#include<bits/stdc++.h>
using namespace std;
int crawlerFolder(vector<string>& logs)
{
    stack<string> s; 
    for(int i = 0; i < logs.size(); i++)
    {
        if(!s.empty() && logs[i] == "../")
        {
            s.pop();
        }else{
            if(logs[i] != "./" && logs[i] != "../")
            {
                s.push(logs[i]);
            }else if(s.empty())
            {
                return 0;
            }
        }
    }
    return s.size();
}

int main()
{
    vector<string> logs = {"d1/","../","../","../"};

    cout << crawlerFolder(logs) << endl;
}