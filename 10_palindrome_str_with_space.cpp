#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int len = s.size();
    remove(s.begin(), s.end(), ' ');
    cout <<s<<endl;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    int temp_len = s.size();
    cout <<s<<endl;
    for (int i = 0; i < len/2; ++i)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z'))
        {
            cout<<s[i]<<" "<<s[temp_len - len - i]<<endl;;
            if (s[i] != s[temp_len - len - i])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    cout <<isPalindrome("kkr - - - : = + ^ r k k");

    return 0;
}
