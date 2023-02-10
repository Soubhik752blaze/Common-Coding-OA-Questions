/*Question:- Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array. */

// works on Boyer Moore voting algo
#include <bits/stdc++.h>
using namespace std;

// Since we know one number is must a majority element here
// we try and find a number which exists solely as a majority i.e its count is greater than all minorities together count
int majorityElement(vector<int> &nums)
{
    int cnt = 0;
    int me = 0;

    while (int i = 0; i < nums.size(); i++)
    {
        if (cnt == 0)
        {
            me = nums[i];
            cnt++;
        }
        else if (me == nums[i])
            cnt++;
        else
            cnt--;
    }
    return me;
}

int main()
{
    vector<int> matrix = {7, 7, 6, 7, 6, 9, 7, 7};
    cout << "The majority element is " << majorityElement(matrix);
    return 0;
}

// TC = o(N)
// SC = O(1)

// Brute_force Algo has o(N^2) complexity
