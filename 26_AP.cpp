#include<bits/stdc++.h>

using namespace std;

bool canMakeArithmeticProgression(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int diff = arr[1] - arr[0];
    cout <<"diff "<<diff<<endl;
    for (int i = 1; i < arr.size(); i++)
    {
        cout<<arr[i - 1] - arr[i]<<endl;
        if ((arr[i - 1] - arr[i]) == diff)
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> arr = {1,3,5};
    cout << canMakeArithmeticProgression(arr);
    return 0;
}