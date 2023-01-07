/*Pattern:- 1
            0 1
            1 0 1
            0 1 0 1
            1 0 1 0 1
 */

// No of rows = "n". Thus, run a loop for n times(outer loop) 
// No of elements printed every row = no of columns = Row'th no (1,2,3,...n) 
// for odd rows, starting element is 1 and it keeps alternating
// for even rows, starting element is 0 and it keeps alternating
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int num = 1;
    for(int i = 0; i < n ; i++)
    {
        (i % 2) ? num = 0 : num = 1;
        for(int j = 0; j <= i; j++)
        {
            cout << num << " ";
            num = 1 - num;
        }
        cout << endl;
    }
    return 0;
}