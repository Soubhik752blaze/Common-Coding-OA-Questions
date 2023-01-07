/*Pattern:- *****
            ****
            ***
            **
            *
 */

// No of rows = "n"
// Thus, run a loop for n times(outer loop) and in each row, print * using a inner loop.
// the only rule here is for each row, print the *, "j" no of times (where "j" is the n - row number that we are currently in)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}