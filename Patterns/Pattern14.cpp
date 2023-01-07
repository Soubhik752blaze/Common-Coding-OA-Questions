/*Pattern:- A
            AB
            ABC
            ABCD
            ABCDE
 */

// Observations:-
// No of rows = "n". Thus, run a loop for n times(outer loop) 
// Same as pattern 5, but with alphabets (A,B,C,D...etc) so we can use ASCII code for that (A starts with ASCII code 65)
// In every row, total elements printed = total no of columns = row no (1,2,3,...n)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << char(j+65);
        }
        cout << endl;
    }
    return 0;
}