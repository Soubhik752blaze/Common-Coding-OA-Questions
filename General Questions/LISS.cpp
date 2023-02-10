/*Question :- Longest Increasing Subsequence
Given an integer array nums, return the length of the longest strictly increasing subsequence.

A subsequence is a sequence that can be derived from an array by deleting some or no elements without changing the order of the remaining elements.
For example, [3,6,2,7] is a subsequence of the array [0,3,1,6,2,2,7].*/

#include <bits/stdc++.h>
using namespace std;

int lengthOfLIS(vector<int> &nums)
{

    int n = nums.size();

    // Binary Search
    vector<int> v; // it doesn't store LIS but it's length equal to LIS
    v.push_back(nums[0]);

    for (int i = 1; i < n; i++)
    {
        int j = v.size();

        if (nums[i] > v[j - 1])
            v.push_back(nums[i]);
        else
        {
            int idx = lower_bound(v.begin(), v.end(), nums[i]) - v.begin();
            if (idx < j)
                v[idx] = nums[i];
        }
    }

    return v.size();
}
int main()
{
    vector<int> nums = {0, 1, 4, 3, 9, 6, 5, 4};
    cout << lengthOfLIS(nums);
    return 0;
}

// Soubhik_Ghosh
// TC -> o(nlogn)
// sc -> o(n)