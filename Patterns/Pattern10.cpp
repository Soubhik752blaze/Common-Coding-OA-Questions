/*Pattern:- *
            **
            ***
            ****
            *****
            ****
            ***
            **
            *
 */

// Here its a mix of pattern 4 and pattern 2
// Also here total no of rows = 9 i.e 2*n - 1.
// Thus pattern 2 will run for i = 0 to n and pattern 5 will run for i = 0 to n - 1
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;

    // pattern 2 for n
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // pattern 5 for n-1
    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = 0; j < (n - 1) - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}