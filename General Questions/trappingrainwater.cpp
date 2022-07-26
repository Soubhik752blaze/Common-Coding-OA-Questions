/*Questions :- Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.*/
#include<bits/stdc++.h>
using namespace std;

int trap(vector<int> &a)
{
    int leftmax=0;
    int rightmax=0;
    int l=0;
    int r= a.size()-1;
    int water=0;
    while(l<=r){
        //when leftmax is less than rightmax
        if(a[l]<=a[r]){
            if(a[l]>=leftmax)   leftmax=a[l];
            else water+= leftmax - a[l];

            l++;
        }
        //when rightmax is less than leftmax
        else{
            if(a[r]>=rightmax)   rightmax=a[r];
            else water+= rightmax - a[r];

            r--;
        }
    }
        return water;

}


int main()
{
    vector<int> nums = {4,2,0,3,2,5};
    int water = trap(nums);
    cout << "Water stored is :- " << water;
    return 0;
}


//@Soubhik_Ghosh
//TC -> o(N)
//SC -> o(1)

//BF -> o(n^2)