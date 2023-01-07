/*Pattern:- 1
            2 3
            4 5 6
            7 8 9 10
            11 12 13 14 15
 */

// Observations:-
// No of rows = "n". Thus, run a loop for n times(outer loop) 
// A number constantly increasing by 1 is printed everytime.
// In every row, total elements printed = total no of columns = row no (1,2,3,...n)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int num = 1;
    for(int i = 0; i < n ; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}