

#include <bits/stdc++.h>
using namespace std;

auto init = []()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();
bool isValid(string s)
{
    int len = s.size();
    if (len % 2 == 0)
    {
        cout << "len " << len << endl;
        char c;
        stack<char> stc;
        for (int i = 0; i < len; i++)
        {
            if (s[i] == '{' || s[i] == '[' || s[i] == '(')
            {
                stc.push(s[i]);
            }
            else
            {
                cout << "top :" << stc.top() << " i:" << i << " ";
                cout << " char c:" << c << "s[i] :" << s[i] << endl;
                c = stc.top();
                if (c == '(' && s[i] == ')')
                {
                    stc.pop();
                    continue;
                }
                else if (c == '{' && s[i] == '}')
                {
                    stc.pop();
                    continue;
                }
                else if (c == '[' && s[i] == ']')
                {
                    stc.pop();
                    continue;
                }
                else
                {
                    return false;
                }
                // cout<<"top :" << stc.top()<<" i:" <<i<< " ";
                // cout << " char c:" <<c <<"s[i] :"<<s[i]<<endl;
                // if (c == s[i])
                // {
                //     stc.pop();
                //     continue;
                // }
                // else
                // {
                //     return false;
                // }
            }
        }
        return true;
    }
    return false;
}
int main()
{
    string s = "({[]})()[]{}";
    // cin>>s;

    cout << isValid(s) << endl;
    return 0;
}
