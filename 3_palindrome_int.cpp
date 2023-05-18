#include <sstream> // for string streams
#include <string> 

#include<iostream>
using namespace std;
bool isPalindrome(int x) {
        ostringstream str1 ;
        str1<<x;
        string str = str1.str();
        // cout << str<<" ";
        int len = str.length();
        // cout <<"Len" <<len<<" ";
        for(int i =0; i<len/2 + 1;i++){
            // cout <<"i= "<<str[i]<<"&&  n -i =" << str[len-i -1]<<endl;
            if(str[i] == str[len-i -1]){
                continue;
            }
            else{
            cout <<"i= "<<str[i]<<"&&  n -i =" << str[len-i -1]<<endl;

                return false;
            }
        }
        return true;
    }
int main(){
    cout <<isPalindrome(151);
    return 0;
}