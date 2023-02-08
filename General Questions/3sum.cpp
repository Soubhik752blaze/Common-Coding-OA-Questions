/*Question:- Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.*/

#include <bits/stdc++.h>
using namespace std;

vector<int> vectorpush(int i, int j, int k)
{
    vector<int> ans;
    ans.push_back(i);
    ans.push_back(j);
    ans.push_back(k);
    return ans;
}
vector<vector<int>> threesum(vector<int> nums)
{
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for (int i = 0; i < n - 2; i++)
    {
        if (i == 0 || (i > 0 && nums[i] != nums[i - 1]))
        {
            int l = i + 1;
            int r = n - 1;
            int sum = 0 - nums[i];
            while (l < r)
            {
                int lrsum = nums[l] + nums[r];
                if (lrsum == sum)
                {
                    vector<int> ans = vectorpush(nums[i], nums[l], nums[r]);
                    res.push_back(ans);

                    // Avoiding duplicates for 2nd number
                    while (l < r && nums[l] == nums[l + 1])
                        l++;
                    l++;

                    // Avoiding duplicates for 3rd number
                    while (l < r && nums[r] == nums[r - 1])
                        r--;
                    r--; 
                }
                
                else if (lrsum < sum)
                    l++;
                else
                    r--;
            }
        }
    }
    return res;
}

// Driver Function
int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> res = threesum(nums);
    cout << "No of triplets :- " << res.size() << endl;
    for (auto it : res)
    {
        cout << "[ ";
        for (auto x : it)
            cout << x << " ";
        cout << " ]";
    }
    return 0;
}

// Best Approach
// TC -> o(n^2) + O(nlogn)
// SC -> o(1)

// Better Approach, TC -> o(n^2) SC->o(M)
// BruteForce -> o(n^3)
// AMAZON