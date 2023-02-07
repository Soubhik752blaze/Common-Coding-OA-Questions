/*Questions :- Write a efficient program to print the subarray with the max sum within a one-dimensional array of numbers*/
#include <bits/stdc++.h>
using namespace std;

//slight modification to kadane's algo
int PrintSubarrayWithMaxSum(int a[], int n, int &start, int &end)
{
    int maxi = INT_MIN, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum > maxi)
            {
                end = i;
                maxi = sum;
            }
        if (sum < 0)
        {
            sum = 0;
            start = i + 1;
            end = i + 1;
        }
            
    }
    return maxi;
}

int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0, end = 0;
    PrintSubarrayWithMaxSum(arr, n, start, end);
    for(int i = start; i <= end; i++)
        cout << arr[i] << " ";
    return 0;
}

//@Soubhik_Ghosh
// TC -> o(n)
// SC -> o(1)