
/*Question:- Given an array of size n and an integer k, return the count of distinct numbers in all windows of size k. */


//2-pointer 
#include <bits/stdc++.h>
using namespace std;

int countinwindowk(vector<int> nums,int k)
{
    int n = nums.size();
    int count=0;
    unordered_map<int,int> mp;
    for(int i=0; i<k ;i++){
        if(mp[nums[i]]==0){
            count++;
        }
        mp[nums[i]]+=1;
    }
    cout<<count<<" ";
    for(int i=k;i<n;i++)
    {
        if(mp[nums[i-k]]==1)            //if i-kth element is unique , reduce count by 1;
            count--;
        mp[nums[i-k]]--;

        if(mp[nums[i]]==0)              //if i element is unique , increase count by 1;
            count++;
        mp[nums[i]]++;
        
        cout<<count<<" ";

    }
            

	
}			


// Driver Function
int main()
{
	vector<int> nums = {1,2,3,2,4,4,5,1,4};
	countinwindowk(nums,3);
	return 0;
}

//@Soubhik_Ghosh
//TC -> o(n)
//SC -> o(n)

//BF -> o(nk^2)
//AMAZON,Samsung