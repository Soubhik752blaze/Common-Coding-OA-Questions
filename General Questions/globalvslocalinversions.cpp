/*Question:- You are given an integer array nums of length n which represents a permutation of all the integers in the range [0, n - 1].

The number of global inversions is the number of the different pairs (i, j) where:

0 <= i < j < n
nums[i] > nums[j]
The number of local inversions is the number of indices i where:

0 <= i < n - 1
nums[i] > nums[i + 1]
Return true if the number of global inversions is equal to the number of local inversions.*/

#include <bits/stdc++.h>
using namespace std;

bool inversioncount(vector<int> &nums)
{
        // all local inversions are global inversions
        // but the all global is not necessary a local inversion
        // so if we can find atleast one extra global inversion we can directly return false
        
        int maxNum = 0;
        int n = nums.size();
        for(int i=0; i<n-2; ++i){
            maxNum = max(maxNum, nums[i]);// we keep track of max number we found so far
            // because it can generate global inversion with smaller element
            if(maxNum > nums[i+2]){
                return false;
            }
        }
        return true;

}

int main()
{
    vector<int> matrix ={1,0,2};
    inversioncount(matrix)?cout<<"True":cout<<"False";
    return 0;
}

//@Soubhik_Ghosh
//TC = o(N)
//SC = O(1)


//Brute_force Algo has o(n2) complexity


