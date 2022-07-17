/*Question:- Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array. */



//works on Boyer Moore voting algo
#include <bits/stdc++.h>
using namespace std;


int majorityElement(vector<int>& nums) {
        int cnt=0;
        int me,i=0;

        while(i<nums.size())
        {
            if(cnt==0)
            {   
                me=nums[i];
                cnt++;
            }
            else if(me==nums[i])
                cnt++;
            else
                cnt--;
            i++;
                    
        }
        return me;
        
    }


int main()
{
    vector<int> matrix ={7,7,6,7,6,9,7,7};
    cout<<"The majority element is "<<majorityElement(matrix);
    return 0;
}

//@Soubhik_Ghosh
//TC = o(N)
//SC = O(1)


//Brute_force Algo has o(n2) complexity


