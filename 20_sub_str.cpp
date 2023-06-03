#include<bits/stdc++.h>

//sliding window is used
//unordered map for keep track of each character freq.

using namespace std;

int characterReplacement(string s, int k)
{
    int characterReplacement(string s, int k) {
        int ans = 0;
        int max_char = 0;
        unordered_map<int, int> count;
        for (int i = 0; i < s.length(); ++i) {
            max_char = max( ++count[s[i]],max_char);
            if (ans - max_char < k)
                ans++;
            else
                count[s[i - ans]]--;
        }
        return ans;
    }
}


int main(){

    cout <<characterReplacement("AABABBA",1)<<endl;


    return 0;
}