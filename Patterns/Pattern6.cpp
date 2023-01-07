/*Pattern:- 12345
            1234
            123
            12
            1
 */

// No of elements in each row = "n"
// Thus, run a loop for n times(outer loop) and in each row, print the col number using a inner loop.
// the only rule here is for each row, print the col number, "j" no of times (where "j" is the n - row number that we are currently in)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            // j + 1 is printed instead of j because array indexes start from 0 not 1.
            cout << j + 1;
        }
        cout << endl;
    }
    return 0;
}