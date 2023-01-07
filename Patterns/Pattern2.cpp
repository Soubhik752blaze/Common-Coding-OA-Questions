/*Pattern:- *
            **
            ***
            ****
 */

// No of starts in each row = "n"
// Thus, run a loop for n times(outer loop) and in each row, print "*" for i times (where i is the row no) using a inner loop.
// thus, for 1st row, 1 * will be printed, for 2nd row 2 * and so on...
#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}