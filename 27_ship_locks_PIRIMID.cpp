#include<bits/stdc++.h>

using namespace std;

// bool check(vector<int>& v){
//     for(int  i = 1 ; i<v.size();i++){
//         if(v[i-1]==v[i]){
//             continue;
//         }else{
//             return false;
//         }
        
//     }
//     return true;
// }

int shipLock(int n , int k , vector<int>& v){
    int moves = 0;
    // int no_of_k= 0;
    
    for(int i = 0 ; i<v.size();i++){
        if(v[i] == 1){
            moves += 2;
        }else if(v[i] == k-1){
            continue;
        }
        else{
            moves +=1;
        }
    }
    
    return moves;
}

int main(){

    vector<int> vec = {1,3,98,4};
    cout <<shipLock(vec.size(),100,vec);
    return 0;
}