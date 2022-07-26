/*Questions :- Given a binary array nums, return the maximum number of consecutive 1's in the array.*/
#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) { 
        int length=0,max_length=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)
                length++;
            else
                length=0;
            max_length=max(max_length,length);
        }
        return max_length;
    }

int main()
{
    vector<int> nums = {1,1,2,2,2,3,3,1,1,1,1};
    int ans = findMaxConsecutiveOnes(nums);
    cout<<ans<< endl;
        
    return 0;
}


//@Soubhik_Ghosh
//TC -> o(N)
//SC -> o(1)

