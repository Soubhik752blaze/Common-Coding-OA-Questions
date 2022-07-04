/*You are given an integer array prices where prices[i] is the price of a given stock on the ith day, and an integer k.

Find the maximum profit you can achieve. You may complete at most k transactions.

*/

#include<bits/stdc++.h>
using namespace std;

// Function that returns max profit
int maxProfit(vector<int>& prices,int k)
{
	    int n=prices.size();
        if(n<=1|| k<=0)
            return 0;
        int profit=0;
        if(k>=n/2)
        {
            for(int i=1;i<n;i++)
                if(prices[i]>prices[i-1])
                    {
                        profit += prices[i]-prices[i-1];
                    }
            return profit;        
        }
        int buy[k]={INT_MIN};
        int sell[k]={0};
        int nextbuy;
        for(int i=0;i<n;i++)
            for(int j=0;j<k;j++) 
            {
                nextbuy = (j==0?0-prices[i]:sell[j-1]-prices[i]);
                buy[j]=max(buy[j],nextbuy);
                sell[j]=max(sell[j],buy[j]+prices[i]);
            }
                
        return sell[k-1];
        
}

// Driver Function
int main()
{
	vector<int> prices = {2,4,5,4,3,1,6};
	cout << maxProfit(prices,2) << endl;
	return 0;
}

//@Soubhik_Ghosh
//TC = O(N*K)
//SC = O(k)