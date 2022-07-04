/*You are given an array prices where prices[i] is the price of a given stock on the ith day.

Find the maximum profit you can achieve. You may complete at most two transactions.*/

#include<bits/stdc++.h>
using namespace std;

// Function that return max profit
int maxProfit(vector<int>& prices)
{
	int profit1 = 0;
        int minprice1 = INT_MAX;
        int profit2 = 0;
        int minprice2 = INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            minprice1 = min(minprice1 , prices[i]);
            profit1 = max(profit1 , prices[i] - minprice1);
            minprice2 = min(minprice2 , prices[i] - profit1);   //buy stock with money remaining from 1st profit
            profit2 = max(profit2, prices[i] - minprice2);
        }
        
        return profit2;   
}

// Driver Function
int main()
{
	vector<int> prices = { 3,3,5,0,0,3,1,4 };
	cout << maxProfit(prices) << endl;
	return 0;
}

//@Soubhik_Ghosh
//TC = O(N)
//SC = O(1)