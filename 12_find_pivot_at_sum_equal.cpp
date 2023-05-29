//good approch but not pass testcase [-1,-1,-1,-1,-1,0]
#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int> &nums)
{
    int i = 0;
    int j = nums.size() - 1;
    int sumi = nums[0], sumj = nums[j];
    i++, j--;
    while (i != j)
    {
        if (sumi <= sumj)
        {
            sumi += nums[i];
            i++;
        }
        else if (sumi >= sumj)
        {
            sumj += nums[j];
            j--;
        }
        else if (sumi == sumj && i != j)
        {
            sumj += nums[j];
            j++;
        }
        // else if (sumi == sumj && i==j)
        // {
        //     cout <<"Hkgd"<<endl;
        //     return i;
        // }
        cout << " i j sumi sumj : " << i << " " << j << " " << sumi << " " << sumj << endl;
    }
    if (sumi == sumj && i == j)
    {
        // cout <<"Hkgd"<<endl;
        return i;
    }
    int total = 0;
    for(int k = 1 ; k < nums.size()-1;k++){
        total += nums[k];
    }
    if(total + nums[0] == 0){
        return nums.size() -1;
    }else if(total + nums[nums.size()-1] == 0){
        i=0;
        return i;
    }
    return -1;
}
int main()
{
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    vector<int> nums1 = {-1,-1,-1,-1,-1,0};
    cout << pivotIndex(nums1) << endl;
    return 0;
}