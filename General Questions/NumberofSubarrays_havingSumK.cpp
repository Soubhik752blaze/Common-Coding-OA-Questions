/*Question :- Given an unsorted array of integers, 
find the number of subarrays having a sum exactly equal to a given number k.

Input : arr[] = {10, 2, -2, -20, 10}, k = -10
Output : 3
Explanation: Subarrays: arr[0…3], arr[1…4], arr[3..4] have a sum exactly equal to -10.  */

#include <bits/stdc++.h>
using namespace std;


// Brute Force is having O(N^2) complexity with approach being find every subarray and if its sum = K, increase count.

// Prefix Sum Technique :-
// Have a map storing number of subarrays with any given "sum"
// For every element, keep increasing the total_sum value and add it to map as no of subarrays with value "total_sum".
// If at any point, total_sum == k, we have one subarray so increase count by 1
// If we find total_sum > k, try and look into the map if any no of subarrays are there whose sum is "total_sum - K"
// If present, add the number of such subarrays to total count.

int subarrayswithsumk(vector<int> nums, int K)
{
    int n = nums.size();
    int ans = 0;
    unordered_map<int, int> mp;
    int total_sum = 0;
    for(int i = 0; i < n; i++)
    {
        total_sum += nums[i];
        // found a subarray with total_sum = k
        if(total_sum == K)
            ans++;
        // if we get a subarray with total_sum > k, look into map if any subarrays are encountered before with sum "total_sum - k"
        // if yes, then add the total no of such subarrays to count.
        if( total_sum > K)
        {
            if(mp.find(total_sum - K)!= mp.end())
                ans += mp[total_sum - K];
        }

        // increase the no of subarrays count with sum value as total_sum
        mp[total_sum] += 1;
    }

    return ans;
}

int main()
{
    vector<int> nums = {9, 4, 20, 3, 10, 5};
    int k = 33;
    int ans = subarrayswithsumk(nums, k);
    cout << "No of subarrays with sum K is " << ans;
    return 0;
}