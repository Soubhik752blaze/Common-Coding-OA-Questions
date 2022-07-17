/*Questions :- Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.*/
#include<bits/stdc++.h>
using namespace std;

int longestconsecutivesubarray(vector<int> &nums)
{
    unordered_set<int> hashset;
    int max_length=0;
    for(int it:nums)
        hashset.insert(it);
    for(int it:hashset)
        if(!hashset.count(it - 1))
        {
            int length=1;
            while(hashset.count(it + length))
                length++;
            max_length=max(max_length,length);
        }
    return max_length;
}

int main()
{
    vector<int> nums = {102,2,3,101,103,1,4};
    int maxlength = longestconsecutivesubarray(nums);
    cout << "Length of longes consecutive sub-array is :- " << maxlength;
    return 0;
}


//@Soubhik_Ghosh
//TC -> o(N)
//SC -> o(N)

//BF -> o(N^2)