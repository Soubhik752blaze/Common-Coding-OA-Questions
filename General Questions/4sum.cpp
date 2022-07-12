/*Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

1> 0 <= a, b, c, d < n
2> a, b, c, and d are distinct.
3> nums[a] + nums[b] + nums[c] + nums[d] == target
*/

#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> foursum(vector<int> &nums,int k)
{
    vector<vector<int>> res;
    if(nums.size()<4)
        return res;
    int n = nums.size();
    sort(nums.begin(),nums.end());
     
    for(int i=0;i<n-3;i++)
    {  
        for(int j=i+1;j<n-2;j++)
        {
            int target = k - nums[i] - nums[j];
            int left = j+1;
            int right = n-1;
            while(left<right)
            {
                int two_sum = nums[left] + nums[right];
                if(two_sum>target)  right--;
                else if(two_sum<target) left--;
                else
                {       vector<int> ans (4,0);
                        ans[0]=nums[i];
                        ans[1]=nums[j];
                        ans[2]=nums[left];
                        ans[3]=nums[right];
                        res.push_back(ans);

                        while(left<right && nums[left]==ans[2])    left++;      //Avoiding duplicates for 3rd number
                        while(left<right && nums[right]==ans[3])   right--;     //Avoiding duplicates for 4th number
                }

            }
            while(j+1<n && nums[j]==nums[j+1])
                j++;                    //Avoiding duplicates for 2nd number
        }
        while(i<n-1 and nums[i]==nums[i+1])     //Avoiding duplicates for 1st number
            i++;
    }
    return res;
}

int main()
{
    vector<int> num={1,0,-1,0,-2,2};
    int k = 0;
    vector<vector<int>> ans = foursum(num,k);
    for(int i=0;i<ans.size();i++)
        {
            for(auto it: ans[i])
                cout<<it<<" ";
            cout<<endl;
        }

    return 0;
}

//@Soubhik
//TC -> O(N^3)
//SC -> O(1) Except for the result container vector<vector<int>> used for returning the answer