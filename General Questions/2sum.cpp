/*Question:- Given an array, find if thw sum of two numbers in the array equal to a given number K exists.*/

#include <bits/stdc++.h>
using namespace std;

// Brute Force:- TC -> O(N^2), SC -> O(1)
// Better Way, Sort and then 2 pointer approach -> TC -> O(NlogN), SC -> O(N) 

// Optimal Approach :- Using hash map
int sumexists(int arr[], int n, int k)
{
    unordered_set<int> m;
    for (int i = 0; i < n; i++)
    {
        if (m.find(k - arr[i]) != m.end())
        {
            cout << "Pair exists "
                 << "(" << arr[i] << "," << k - arr[i] << ")";
            return 1;
        }

        m.insert(arr[i]);
    }
    cout << "Pair Doesnot exist";
    return 0;
}


// Driver Function
int main()
{
    int arr[] = {1, 4, 2, 7, 5, 3, 9, 6};
    int N = sizeof(arr) / sizeof(arr[0]);
    int target = 150;
    sumexists(arr, N, target);
    return 0;
}

//TC -> O(N)
//SC -> O(N)