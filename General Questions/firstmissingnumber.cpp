/*Question :- Given an unsorted integer array nums, return the smallest missing positive integer.

You must implement an algorithm that runs in O(n) time and uses constant extra space.*/

#include<bits/stdc++.h>
using namespace std;

int firstmissingpositive(vector<int> nums)
{
    int N = nums.size();
    if( N==0 )    return -1;

    //clearing out the negatives and out of bound numbers
    for(int i=0; i<N ; i++)
        if(nums[i]<=0 || nums[i]>N)
            nums[i] = N + 1;

    for(int i=0; i<N ; i++)
    {
        int idp = abs(nums[i]);
        if( idp > N )   continue;

        idp-- ;
        if( nums[idp] > 0 )             //we make them negative only if they are not already negative
            nums[idp] = -nums[idp];

    }

    for(int i=0; i<N ; i++)
    {
        if(nums[i] > 0)
            return i + 1;
    }

    return N + 1;

}

int main()
{
    vector<int> nums = {0,1,2};
    cout << firstmissingpositive(nums);
    return 0;
}