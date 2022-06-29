/*Questions :- Write a efficient program to find the sum of the contiguous subarray within a one-dimensional array of numbers that has the largest sum.*/
#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(int a[],int n)
{
    int max_sum=INT_MIN, max_ends=0;
    for(int i=0;i<n;i++)
        {
            max_ends = max_ends + a[i];
            if(max_ends> max_sum)
                max_sum = max_ends;
            if(max_ends<0)
                max_ends=0;
        }
    return max_sum;
}

int main()
{
    int a[] = {-2, -3, 4, -1, -4, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}


//@Soubhik_Ghosh
//TC -> o(n)
//SC -> o(1)