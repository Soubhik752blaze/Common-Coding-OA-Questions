/*Pattern:- E
            E D
            E D C
            E D C B
            E D C B A
 */

// Observations:-
// No of rows = "n". Thus, run a loop for n times(outer loop)
// alphabets (A,B,C,D...etc) so we can use ASCII code for that (A starts with ASCII code 65)
// In every row, total elements printed = row'th no (i.e in 1st row, there is one element printed, in 2nd row 2 elements are printed, etc)
// Also, every element starts from 65 + (n-i)th ASCII character and prints all remaining characters by -1 ASCII. ( i is row no)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <=n; i++)
    {
        for (int j = n - i; j < n; j++)
        {
            cout << char(j + 65) << " ";
        }
        cout << endl;
    }
    return 0;
}