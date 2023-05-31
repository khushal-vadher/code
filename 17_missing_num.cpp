#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int sum1 = 0;
    // int sum2 = (nums.size()*(nums.size()+1))/2;
    int sum2 = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum1 += nums[i];
        sum2 += (i + 1);
    }
    return sum2 - sum1;
}
int main()
{
    vector<int> vec = {5, 4, 0, 1, 2};
    cout << missingNumber(vec);

    return 0;
}