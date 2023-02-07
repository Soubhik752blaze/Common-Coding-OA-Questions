/*Question :- Given an array of integers arr[] and a number m,
count the number of subarrays having XOR of their elements as m.

Input : arr[] = {4, 2, 2, 6, 4}, m = 6
Output : 4
Explanation : The subarrays having XOR of
              their elements as 6 are {4, 2},
              {4, 2, 2, 6, 4}, {2, 2, 6},
               and {6}
*/

#include <bits/stdc++.h>
using namespace std;

/*Brute Force:- Find all Subarrays and find their Xor, if any subarray xor equals k, increase the count of such subarrays
Complexity of this solution = TC -> O(N*N), SC -> O(1)
*/
int countsubarrays(vector<int> nums, int k)
{
    int n = nums.size();
    unordered_map<int, int> mp;
    int xorr = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        xorr = xorr ^ nums[i];
        if (xorr == k)
            count++;
        if (mp.find(xorr ^ k) != mp.end())
        {
            count += mp[xorr ^ k];
        }
        mp[xorr] += 1;
        
    }

    return count;
}
int main()
{
    vector<int> nums = {4,2,2,6,4};
    int k = 6;
    int ans = countsubarrays(nums, k);
    cout << " No. of Subarrays with given XOR = " << ans;
}

// TC -> O(Nlogn) on an average, as even unordered_map at worst takes O(n) for searching, so taking "Logn" as the complexity as that of ordered map
// SC -> O(N)
 