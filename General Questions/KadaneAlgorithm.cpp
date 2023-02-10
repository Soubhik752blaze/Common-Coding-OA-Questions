/*Questions :- Write a efficient program to find the max sum of a contiguous subarray within a one-dimensional array of numbers that has the largest sum.*/
#include <bits/stdc++.h>
using namespace std;

/*logic :- 1. Update max_sum only when we achieve a greater value of max_ends
           2. Unless until max_ends < 0, keep adding the array elements until the end of array.
           3. If at any point, it < 0 then make max_ends = 0 and repeat

Common FAQ :- Why dont we set max_ends = 0 as it starts decreasing(i.e we encounter negative numbers) ?
       Ans :- Until it becomes < 0, we dont set it to 0, because we might find potential numbers in the future
              which will increase the overall sum of the subarray.
*/

int maxSubArraySum(int a[], int n)
{
    int max_sum = INT_MIN, max_ends = 0;
    for (int i = 0; i < n; i++)
    {
        max_ends = max_ends + a[i];
        if (max_ends > max_sum) // kadane algo
            max_sum = max_ends;
        if (max_ends < 0)
            max_ends = 0;
    }
    return max_sum;
}

int main()
{
    int a[] = {-2, -3, 4, -1, -4, 1, 5, -3};
    int n = sizeof(a) / sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}

//@Soubhik_Ghosh
// TC -> o(n)
// SC -> o(1)