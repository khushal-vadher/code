#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    int mid = (start + end) / 2;
    int pivot = 0;
    while (start <= end)
    {
        if (nums[mid] >= nums[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = (end + start) / 2;
    }
    pivot = start;
    if (target > nums[nums.size() - 1])
    {
        // do BS in 0 to pivot -1
        start = 0;
        end = pivot - 1;
        while (start <= end)
        {
            if (nums[mid] == target)
            {

                return mid;
                break;
            }
            else if (nums[mid] > target)
            {
                end = mid - 1;
            }
            else if (nums[mid] < target)
            {
                start = mid + 1;
            }

            mid = (start + end) / 2;
        }
    }
    else
    {
        // BS from pivot to end of nums
        start = pivot;
        end = nums.size() - 1;
        while (start <= end)
        {
            if (nums[mid] == target)
            {

                return mid;
                break;
            }
            else if (nums[mid] > target)
            {
                end = mid - 1;
            }
            else if (nums[mid] < target)
            {
                start = mid + 1;
            }

            mid = (start + end) / 2;
        }
    }
    return -1;
}
int main()
{
    return 0;
}

// code from ref.
int search(vector<int> &nums, int target)
{
    int n = nums.size();
    int left = 0;
    int right = n - 1;
    int mid = left + (right - left) / 2;
    while (left <= right)
    {
        if (nums[mid] == target)
            return mid;
        if (nums[mid] >= nums[left])
        {
            if (target >= nums[left] && target <= nums[mid])
            {
                right = mid - 1;
            }
            else
                left = mid + 1;
        }
        else
        {
            if (target >= nums[mid] && target <= nums[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
        mid = left + (right - left) / 2;
    }
    return -1;
}