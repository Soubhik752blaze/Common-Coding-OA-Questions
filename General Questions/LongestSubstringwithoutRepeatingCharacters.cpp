
/*Question:- Given a string s, find the length of the longest substring without repeating characters.*/


//2-pointer 
#include <bits/stdc++.h>
using namespace std;

// Function that find the length of the longest substring without repeating characters.
int LongestSubstringwithoutRepeatingCharacters(string s)
{
    vector<int> mpp(256,-1);
	int len=0;
    int n = s.length();
    int l=0,r=0;
    while(r<n){
        if(mpp[s[r]]!=-1)
            l= max(mpp[s[r]]+1,l);
        mpp[s[r]] = r;
        len = max(len , r-l+1);
        r++;
    }
	
    return len;
	
}			


// Driver Function
int main()
{
	string s="aabcdeffcaabaa";
	int len = LongestSubstringwithoutRepeatingCharacters(s);
	cout<<len<<" ";
	return 0;
}

//@Soubhik_Ghosh
//TC -> o(n)
//SC -> o(n)

//BF -> o(n^3)
//AMAZON