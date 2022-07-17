/*Question:- Given an array nums of size n, return all the majority elements.

The majority element is the element that appears more than ⌊n / 3 ⌋ times. */



//works on Moore voting algo
#include <bits/stdc++.h>
using namespace std;


vector<int> majorityElement(vector<int>& nums) {
        int c1=0,c2=0,num1 = -1,num2 = -1;
        int sz=nums.size();
        for(auto cl:nums)
        {
            if(cl == num1)  c1++;
            if(cl == num2)  c2++;
            else if(c1==0)
            {
                num1=cl;
                c1=1;
            }
            else if(c2==0)
            {
                num2=cl;
                c2=1;
            }
            else{
                c1--;
                c2--;
            }
        }
        c1=0,c2=0;
        vector<int> ans;
        for(auto it:nums)
        {
            if(it == num1)   c1++;
            if(it == num2)   c2++;

        }

        if(c1> sz/3)
            ans.push_back(num1);
        if(c2> sz/3)
            ans.push_back(num2);



        return ans;
        
    }


int main()
{
    vector<int> matrix ={1,1,1,3,3,2,2,2};
    vector<int> ans = majorityElement(matrix);
    cout<<"The majority elements are :- ";
    for (auto it:ans)
        cout<<it<<" ";
    return 0;
}

//@Soubhik_Ghosh
//TC = o(N)
//SC = O(1)


//Brute_force Algo has o(n2) complexity


