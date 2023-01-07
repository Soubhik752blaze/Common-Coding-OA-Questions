/*Pattern:- *
 **
 ***
 ****
 */

// No of starts in each row = "n"
// Thus, run a loop for n times(outer loop) and in each row, print the row no using a inner loop.
// the only rule here is for each row, print the row no "i" no of times (where "i" is the row number we are currently in)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            // i + 1 is printed instead of i because array indexes start from 0 not 1.
            cout << i + 1;
        }
        cout << endl;
    }
    return 0;
}