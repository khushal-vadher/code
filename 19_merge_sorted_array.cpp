
#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = 0;
    int j = 0;
    while (i < m && j < n)
    {
        cout <<i<<" "<<j<<" "<<endl;
        if (nums1[i] > nums2[j])
        {
            swap(nums1[i], nums2[j]);
            i++;
        }
        else if (nums1[i] == 0)
        {
            // cout<<i<<" ";
            swap(nums1[i], nums2[j]);
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }

    // int i =m;
    // for(int j = 0;j<n;j++){
    //    cout <<nums2[j]<<" ";
    // }
    // sort(nums1.begin(),nums1.end());
    cout << "merge :"<<endl;
    for(int j = 0;j<6;j++){
       cout <<nums1[j]<<" ";
    }
}

int main(){

    vector<int> nums1 ={1,2,3,0,0,0};
    vector<int> nums2 ={2,5,6};
    merge(nums1,6,nums2,3);
    

    return 0;
}