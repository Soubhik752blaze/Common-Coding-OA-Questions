/*Pattern:-     *
               ***
              *****
             *******
            *********
            *********
             *******
              *****
               ***
                *
 */

// If we observe carefully its a mix of pattern 7 + pattern 8 ( with extra space from starting to match the alignment)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;

    //pattern 7
    for (int i = 0; i < n; i++)
    {
        for(int x = 0; x < n - i; x++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2*i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    //pattern 8
    for (int i = 0; i < n; i++)
    {
        // here x <= i is given as stopping condition instead of x < i to match the spacing alignment
        for(int x = 0; x <= i; x++)
        {
            cout << " ";
        }
        for (int j = 2*(n-i) - 1; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }


    return 0;
}