/*You are given an integer array prices where prices[i] is the price of a given stock on the ith day, and an integer k.

Find the maximum profit you can achieve. You may complete at most k transactions.

*/

#include<bits/stdc++.h>
using namespace std;

// Function that returns max profit
int maxProfit(vector<int>& prices,int k)
{
	    int n=prices.size();
        if(n==0|| k==0)
            return 0;
        int ans=0;
        vector<vector<int>>dp(k+1,vector<int>(n,0));
        
        for(int i=1;i<=k;i++)
        {
            int mx_diff=-prices[0];
            for(int j=1;j<n;j++)
            {
                dp[i][j]=max(dp[i][j-1],mx_diff+prices[j]);
                mx_diff=max(mx_diff, dp[i-1][j]-prices[j]);
                
            }
        }
        return dp[k][n-1];   
}

// Driver Function
int main()
{
	vector<int> prices = { 3,2,6,5,0,3};
	cout << maxProfit(prices,3) << endl;
	return 0;
}

//@Soubhik_Ghosh
//TC = O(N*K)
//SC = O(n*k)