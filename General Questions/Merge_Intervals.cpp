/*Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals,
and return an array of the non-overlapping intervals that cover all the intervals in the input.*/
#include <bits/stdc++.h>
using namespace std;

// Common pattern:- Intervals overlap
// In such case always sort using start or end point and then try and find patterns which can be used to solve the problem
vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    vector<vector<int>> ans;
    if (intervals.size() == 0)
        return ans;

    // sorting on basis of starting points
    sort(intervals.begin(), intervals.end());

    vector<int> tempmerged = intervals[0];
    for (auto it : intervals)
    {
        // if found a overlapping interval, have its ending point as the max of the 2 end points
        if (it[0] <= tempmerged[1])
            tempmerged[1] = max(tempmerged[1], it[1]);
        else
        {
            // if found a non-overlapping interval, push the earlier interval to ans
            //  then assign tempmerged as this interval for further analysis
            ans.push_back(tempmerged);
            tempmerged = it;
        }
    }

    //push last interval into merged as it was analysed but never got chance to be pushed into ans at the end
    ans.push_back(tempmerged);
    return ans;
}

int main()
{
    vector<vector<int>> nums = {{1, 6}, {2, 8}, {17, 20}, {10, 15}};
    vector<vector<int>> ans = merge(nums);
    for (auto it : ans)
    {
        cout << "[ ";
        for (auto num : it)
        {
            cout << num << " ";
        }
        cout << "]";
    }
    return 0;
}

// TC -> o(n)
// SC -> o(1)

// BruteForce -> o(nlogn)+o(n^2)