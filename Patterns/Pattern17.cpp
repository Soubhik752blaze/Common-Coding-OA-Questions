/*Pattern:-    A
              ABA
             ABCBA
            ABCDCBA
 */

// Observations:-
// No of rows = "n". Thus, run a loop for n times(outer loop)
// 3 inner loops -> space -> elements -> space
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        // print spaces
        for (int j = i; j <= n; j++)
            cout << " ";

        // print element (for every ith row, no of characters present = 2*i + 1)
        char ch = 'A';
        int breakpoint = (2*i - 1) / 2;
        for (int j = 1 ; j <= 2*i - 1; j++)
        {
            // first half increasing character then decreasing like ABC then BA
            cout << ch;
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }

        // print spaces
        for (int j = i; j <= n; j++)
            cout << " ";

        // next line
        cout << endl;
    }
    return 0;
}