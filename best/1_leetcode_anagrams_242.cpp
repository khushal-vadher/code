// https://leetcode.com/problems/valid-anagram/


#include<bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

bool isAnagram(string s, string t) {
        int cs[26]={},ct[26]={};
        for(auto c:s){
            cs[(int)c-'a']++;
        }
        for(auto c:t){
            ct[(int)c-'a']++;
        }
        for(int i=0;i<26;i++){
            if(cs[i]!=ct[i]) return false;
        }
        return true;
    }

int main(){
    string s = "bca";
    string t = "abc";
    cout <<isAnagram(s,t)<<endl;
    return 0;
}