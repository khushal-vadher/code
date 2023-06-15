
#include <bits/stdc++.h>
using namespace std;

auto init = []()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

int main()
{
    string s = "bca";
    sort(s.begin(), s.end());
    cout << s << endl;
    return 0;
}

class Solution
{
public:
    string longestPalin(string s)
    {

        int maxLen = 1;
        int start = 0;
        int n = s.size();

        // odd length substring

        for (int i = 0; i < n; i++)
        {
            int l = i, r = i;
            while (l >= 0 && r < n)
            {
                if (s[l] == s[r])
                {
                    r++;
                    l--;
                }
                else
                {
                    break;
                }
            }
            int curr_len = r - (l + 1);
            if (curr_len > maxLen)
            {
                maxLen = curr_len;
                start = l + 1;
            }
        }

        // Even length substring

        for (int i = 0; i < n - 1; i++)
        {
            int l = i, r = i + 1;
            while (l >= 0 && r < n)
            {
                if (s[l] == s[r])
                {
                    l--;
                    r++;
                }
                else
                    break;
            }
            int curr_len = r - (l + 1);
            if (curr_len > maxLen)
            {
                maxLen = curr_len;
                start = l + 1;
            }
        }

        return s.substr(start, maxLen);
    }
};