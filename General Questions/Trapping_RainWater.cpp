/*Questions :- Given n non-negative integers representing an elevation map where the width of each bar is 1,
compute how much water it can trap after raining.*/
#include <bits/stdc++.h>
using namespace std;

/*Logic :- For each index, we have to find the amount of water that can be stored and we have to sum it up.
If we observe carefully the amount the water stored at a particular index is the minimum of maximum elevation to the left and right of the index minus the elevation at that index.
i.e water[i] = min(left[i], right[i]) - height[i]*/

// Brute Force :- O(N^2) as for every index i, i will calculate the left[i] and right[i]
// Better approach using prefix and suffix array:- O(N) with an addition Space complexity of O(N) for 2 arrays

/* Optimal Approach :- 2 pointer approach


*/
int trap(vector<int> &a)
{
    // even after l and r, we need leftmax and rightmax variables because l and r keep moving
    // so we need track of last leftmax and rightmax encountered for l and r.
    int leftmax = 0, rightmax = 0;
    int l = 0, r = a.size() - 1;
    int water = 0;
    while (l <= r)
    {
        // when leftmax is less than rightmax
        if (a[l] <= a[r])
        {
            if (a[l] >= leftmax)
                leftmax = a[l];
            else
                water += leftmax - a[l];

            l++;
        }

        // when rightmax is less than leftmax
        else
        {
            if (a[r] >= rightmax)
                rightmax = a[r];
            else
                water += rightmax - a[r];

            r--;
        }
    }
    return water;
}

int main()
{
    vector<int> nums = {4, 2, 0, 3, 2, 5};
    int water = trap(nums);
    cout << "Water stored is :- " << water;
    return 0;
}

// TC -> O(N)
// SC -> O(1)
