/*Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

1> 0 <= a, b, c, d < n
2> a, b, c, and d are distinct.
3> nums[a] + nums[b] + nums[c] + nums[d] == target
*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> foursum(vector<int> &nums, int k)
{
    vector<vector<int>> res;
    if (nums.size() < 4)
        return res;
    int n = nums.size();
    sort(nums.begin(), nums.end());

    //3 pointer technique
    //fix 2 pointers and then use 2 remaining pointers for 2 pointer approach for a given sum
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int target = k - nums[i] - nums[j];
            int left = j + 1;
            int right = n - 1;
            while (left < right)
            {
                int two_sum = nums[left] + nums[right];

                if (two_sum < target)
                    left++;
                else if (two_sum > target)
                    right--;
                else
                {
                    vector<int> ans(4, 0);
                    ans[0] = nums[i];
                    ans[1] = nums[j];
                    ans[2] = nums[left];
                    ans[3] = nums[right];
                    res.push_back(ans);

                    // Avoiding duplicates for 3rd number
                    while (left < right && nums[left] == ans[2])
                        left++;
                    // Avoiding duplicates for 4th number
                    while (left < right && nums[right] == ans[3])
                        right--;
                }
            }
            // Avoiding duplicates for 2nd number
            while (j + 1 < n && nums[j] == nums[j + 1])
                j++;
        }
        // Avoiding duplicates for 1st number
        while (i + 1 < n && nums[i] == nums[i + 1])
            i++;
    }
    return res;
}

int main()
{
    vector<int> num = {1, 1, 2, 2, 2, 3, 3, 4, 4, 4};
    int k = 9;
    vector<vector<int>> ans = foursum(num, k);
    cout << "The unique Quadruplets are :- " << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        for (auto it : ans[i])
            cout << it << " ";
        cout << endl;
    }

    return 0;
}

// TC -> O(N^3) + O(NlogN) == O(N^3)
// SC -> O(1) Except for the result container vector<vector<int>> used for returning the answer