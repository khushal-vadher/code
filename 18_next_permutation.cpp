
#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums) {
        //we need to implement this function
        // next_permutation(nums.begin(),nums.end()); 
        int size = nums.size();
        int i = 1 , j =1; 
        bool isSorted = true;
        for(int k = 1 ; k<size;k++){
            if(nums[k-1]<nums[k]){
                i = k;
                isSorted =false;
                
            }
            if(nums[i-1]<nums[k]){
                j = k;
            }
            
        }
        if(isSorted){
            sort(nums.begin(),nums.end());
            return;
        }
        //step 2 swap i-1 and j
        swap(nums[i-1],nums[j]);
        
        //step 3
        int temp =size - i -1;
        if(temp%2!=0){
            temp+=1;
        }
        for(int k = 0 ; k<temp/2;k++){
            swap(nums[k+i],nums[size-1-k]);
        }

    }
int main(){

    vector<int> nums = {1,3,2};
    nextPermutation(nums);
    cout << endl;
    for(int i = 0 ; i<nums.size();i++){
        cout << nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}