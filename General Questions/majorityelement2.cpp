/*Question:- Given an array nums of size n, return all the majority elements.

The majority element is the element that appears more than ⌊n / 3 ⌋ times. */

// works on Moore voting algo
#include <bits/stdc++.h>
using namespace std;

// same logic as majorit element 1
// just here we are not guaranteed of a majority solution hence we check at the end
// that whether the two elements we have found are really majority elements or not.
vector<int> majorityElement(vector<int> &nums)
{
    int c1 = 0, c2 = 0, num1 = -1, num2 = -1;
    int sz = nums.size();
    for (auto it : nums)
    {
        if (it == num1)
            c1++;

        if (it == num2)
            c2++;

        else if (c1 == 0)
        {
            num1 = it;
            c1 = 1;
        }
        else if (c2 == 0)
        {
            num2 = it;
            c2 = 1;
        }
        else
        {
            c1--;
            c2--;
        }
    }

    c1 = 0, c2 = 0;

    vector<int> ans;
    for (auto it : nums)
    {
        if (it == num1)
            c1++;
        if (it == num2)
            c2++;
    }

    if (c1 > sz / 3)
        ans.push_back(num1);
    if (c2 > sz / 3)
        ans.push_back(num2);

    return ans;
}

int main()
{
    vector<int> matrix = {1, 1, 1, 3, 3, 2, 2, 2};
    vector<int> ans = majorityElement(matrix);
    cout << "The majority elements are :- ";
    for (auto it : ans)
        cout << it << " ";
    return 0;
}

// TC = o(N)
// SC = O(1)

// Brute_force Algo has o(N^2) complexity
