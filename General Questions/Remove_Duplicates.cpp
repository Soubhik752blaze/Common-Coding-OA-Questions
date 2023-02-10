/*Questions :- Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. 
The relative order of the elements should be kept the same.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. 
More formally, if there are k elements after removing the duplicates, 
then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.*/
#include<bits/stdc++.h>
using namespace std;

int removeduplicates(vector<int> &nums)
{
    if(nums.size()==0)
        return 0;
    int i=0;
    for(int j=1;j<nums.size();j++)
        if(nums[i]!=nums[j])
        {
            i++;
            swap(nums[i],nums[j]);
        }
    return i+1;
}

int main()
{
    vector<int> nums = {1,1,2,2,2,3,4,5,6,7,7,7,8,8,8,8,9,9};
    int ans = removeduplicates(nums);
    cout<<ans<< endl;
    int i=0;
    while(i<ans){
        cout<<nums[i]<<" ";
        i++;
    }
        
    return 0;
}


//@Soubhik_Ghosh
//TC -> o(N)
//SC -> o(1)

//BF -> o(NlogN),o(N)