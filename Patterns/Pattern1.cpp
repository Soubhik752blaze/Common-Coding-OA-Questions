/*Pattern:- ****
            ****
            ****
            ****
 */

// No of starts in each row = total no of rows, i.e "n"
// Thus, run a loop for n times(outer loop) and in each row, print "*" n times using a inner loop.
#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int row = 4, col = 4;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}