/*Question:- Given a string s, find the length of the longest substring without repeating characters.*/

// 2-pointer
#include <bits/stdc++.h>
using namespace std;

// Variable Sliding window concept
// Take a window and check if all characters are unique
// Keep increasing the window length till all characters are still unique
// When window is finally able to include a duplicate character, shift the head of window to a position to a place again where the window still has all distinct characters
// this shifting of window head is facilitated via the use of a map
int LongestSubstringwithoutRepeatingCharacters(string s)
{
    //256 max amount of distinct characters
    vector<int> mpp(256, -1);
    int len = 0;
    int n = s.length();
    int l = 0, r = 0;

    //traverse entire string
    while (r < n)
    {
        //if found a character already present in map, shift the head to a position where window again has all distinct elements
        if (mpp[s[r]] != -1)
            l = max(mpp[s[r]] + 1, l);

        //insert the latest character index to map
        mpp[s[r]] = r;
        //calculate length of max window possible at every iteration
        len = max(len, r - l + 1);
        //slide the window
        r++;
    }

    return len;
}


int main()
{
    string s = "aabcdeffcaabaa";
    int len = LongestSubstringwithoutRepeatingCharacters(s);
    cout << len << " ";
    return 0;
}


// TC -> O(n)
// SC -> O(256) == O(1) as map takes constant space and doesnot increase with input size 

// Brute Force -> Tc = O(n^2), SC = O(n) where every substring is generated and checked.
// [AMAZON]