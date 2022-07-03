/*Question:- The cost of a stock on each day is given in an array, find the max profit that you can make by buying and selling in those days.
only can buy and sell 1 time*/

#include <bits/stdc++.h>
using namespace std;

// Function that return
int maxProfit(int* prices, int size)
{
	
	int profit = 0;
	int minimum = INT_MAX;

    for(int i=0;i<size;i++)
		{
			minimum=min(minimum,prices[i]);
			profit=max(profit,prices[i]-minimum);

		} 
	return profit;
}

// Driver Function
int main()
{
	int prices[] = { 100, 180, 260, 310, 40, 535, 695 };
	int N = sizeof(prices) / sizeof(prices[0]);
	cout << maxProfit(prices, N) << endl;
	return 0;
}

//@Soubhik_Ghosh
//TC = O(N)
//SC = O(1)
