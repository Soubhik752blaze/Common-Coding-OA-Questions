/*Question :- Given an integer array nums and an integer k,
return the number of non-empty subarrays that have a sum divisible by k.

A subarray is a contiguous part of an array.*/

#include <bits/stdc++.h>
using namespace std;

// Logic is explained below :-
// Let there be a subarray (i, j) whose sum is divisible by k
// sum(i, j) = sum(0, j) - sum(0, i-1)
// Sum for any subarray can be written as q*k + rem where q is a quotient and rem is remainder
// Thus, sum(i, j) = (q1 * k + rem1) - (q2 * k + rem2)
// hence, sum(i, j) = (q1 - q2)k + rem1-rem2
// for sum(i,j) to be divisible by k, rem1 = rem2, hence s[j] % k = rem1 = rem2 = s[i - 1] % k
// s[j] % k = s[i - 1] % k, is the main logic to be used here.
// So we need to find such no of pair of indices (i, j) that they satisfy the above condition.
// for every such pair, there will be a subarray whose sum will be divisible by k
int subarraysDivByK(int k, vector<int> nums)
{
    // Make an auxiliary array of size k as Mod[k]
    // This array holds the count of each remainder we are getting after dividing cumulative sum till any index in arr[].
    vector<int> mod(k, 0);
    int cnt = 0;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        int rem = ((sum % k) + k) % k;
        mod[rem]++;
    }

    for (int i = 0; i < k; i++)
    {
        // Now traverse Mod[] array & for any Mod[i] > 1 we can choose any two pair of indices for sub-array by (Mod[i]*(Mod[i] – 1))/2 number of ways . 
        // add the no of pairs to total no of subarrays with sum divisible by k
        if (mod[i] > 1)
            cnt += (mod[i] * (mod[i] - 1)) / 2;
    }

    // Also, add the elements which are divisible by k itself i.e., the elements whose sum % k = 0
    cnt += mod[0];

    return cnt;
}
int main()
{
    vector<int> nums = {4, 5, 0, -2, -3, 1};
    int k = 5;
    int ans = subarraysDivByK(k, nums);
    cout << "No of subarrays with sum divisible by k = " << ans;
}

//TC -> O(N + K)
//SC -> O(K)
