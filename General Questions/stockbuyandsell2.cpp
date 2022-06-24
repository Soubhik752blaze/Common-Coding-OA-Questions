/*Question:- The cost of a stock on each day is given in an array, find the max profit that you can make by buying and selling in those days.
Can buy and sell multiple times*/

#include <iostream>
using namespace std;

// Function that return
int maxProfit(int prices[], int size)
{
	
	int maxProfit = 0;
    for(int i=1;i<size;i++)
	    if (prices[i] > prices[i - 1]) 
            maxProfit+= prices[i] - prices[i - 1];
	return maxProfit;
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