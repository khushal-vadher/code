
#include<bits/stdc++.h>
using namespace std;


void subSets(vector<int> nums,vector<vector<int>> &ans,vector<int> output ,int index){
    //base case
    if(index >= nums.size()){
        ans.push_back(output);
        // cout <<" khfd";
        return;
    }
    //exclude the element
    subSets(nums,ans,output,index+1);

    //include the element
    int ele = nums[index];
    output.push_back(ele);
    subSets(nums,ans,output,index+1);

}

int main(){
    
    vector<int> vec = {1,3,2};
    vector<vector<int>> ans;
    vector<int> op;
    subSets(vec,ans,op,0);
    for(int i = 0 ; i <= ans.size();i++){
        for(int j = 0 ; j<ans[i].size();j++){
        cout << ans[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}