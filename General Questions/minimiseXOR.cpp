/*Question:- Given two numbers a and b,
find a number "x" such that it has same no of bits set as "b" and such that "a" xor "x" is minimum.
*/
#include <bits/stdc++.h>
using namespace std;

int minimizeXor(int num1, int num2)
{
    int ans = 0;
    int setbits = 0;
    //find no of bits set in b 
    while (num2)
    {
        if (num2 & 1)
            setbits++;
        num2 /= 2;
    }
    //as now count of set bits is available, we try to place (or set) 1s in our "ans" as much as possible similar like "a" but put priority from MSB to LSB
    //this helps ensuring that the value of "ans" is minimum
    for (int i = 31; i >= 0 && setbits; i--)
    {
        if (num1 & (1 << i))
        {
            ans |= (1 << i);
            setbits--;
        }
    }
    //with all the remaining set bits(if still present) try to put them in "ans" as much as towards LSB as now are setting extra 1s in "ans"
    //this helps ensuring that the value of "ans" is minimum
    for (int i = 0; i < 32 && setbits; i++)
    {
        if ((ans & (1 << i)) == 0)
        {
            ans |= (1 << i);
            setbits--;
        }
    }
    return ans;
}

int main()
{
    int a = 19;      
    int b = 27;     
    int ans = minimizeXor(a, b);
    cout << ans;
}
