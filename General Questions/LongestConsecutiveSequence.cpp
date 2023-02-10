/*Questions :- Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.*/
#include <bits/stdc++.h>
using namespace std;

// we can do the same in O(N^2)
// The logic is slightly changed to the solve the same problem in O(N)
// This time we look for consecutive numbers only when we find a number whose immediate -1 number i.e number-1 doesnot exist
// This way we are able to reduce our search time to O(N) as we dont check for each and every number 
// We only check for those which can be a potential starting point of Longest Consecutive Sequence.
int longestconsecutivesubarray(vector<int> &nums)
{
    unordered_set<int> hashset;
    int max_length = 0;
    for (int it : nums)
        hashset.insert(it);
    for (int it : hashset)
        if (!hashset.count(it - 1))
        {
            int length = 1;
            while (hashset.count(it + 1))
            {
                it++;
                length++;
            }

            max_length = max(max_length, length);
        }
    return max_length;
}

int main()
{
    vector<int> nums = {102, 2, 3, 101, 103, 1, 4, 100, 104, 105};
    int maxlength = longestconsecutivesubarray(nums);
    cout << "Length of longes consecutive sub-array is :- " << maxlength;
    return 0;
}

// TC -> O(N)
// SC -> O(N)

// Brute Force -> o(N^2)