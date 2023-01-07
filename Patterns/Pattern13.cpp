/*Pattern:- 1
            2 3
            4 5 6
            7 8 9 10
            10 11 12 13 15
 */

// No of rows = "n"
// A number starting from 1 keeps on increasing on every print.
// total elements printed in every row = total no of columns = row'th no.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << num++ << " ";
        }
        cout << endl;
    }
    return 0;
}