#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        
        for(int i =1 ; i<nums.size() ;i++){
            if((nums[i-1] ^ nums[i] )!= 0){
                count++;
                // nums.erase(nums.begin() + i);
                nums[count] = nums[i];
            }

        }
        count++; //this increement for 1st element of vector as unique 
        return count;
        
    }
};

int main(){
   
    return 0;
}