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


// class Solution {
// public:
//     bool isPalindrome(string s) {
//         int n=s.size();
//     string sentence="";
//     for(int i=0;i<n;i++)
//     {
//         if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
//             sentence+=s[i];
//     }
//     transform(sentence.begin(),sentence.end(),sentence.begin(),::tolower);

//     int start=0;
//     int end=sentence.size()-1;
//     while(start<=end)
//     {
//         if(sentence[start]!=sentence[end])
//             return false;
//         else
//             start++,end--;
//     }
//     return true;
//     }
// };