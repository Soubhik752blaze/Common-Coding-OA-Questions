/*Question :- There is a robot on an m x n grid. The robot is initially located at the top-left corner (i.e., grid[0][0]).
The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). The robot can only move either down or right at any point in time.

Given the two integers m and n, return the number of possible unique paths that the robot can take to reach the bottom-right corner.*/

#include <bits/stdc++.h>
using namespace std;

// recursive solution -> O(2^(m*n))
int findways_recursive(int i, int j, int m, int n)
{
    // base case
    if (i == m - 1 && j == n - 1)
        return 1;
    if (i > m - 1 || j > n - 1)
        return 0;

    return findways_recursive(i + 1, j, m, n) + findways_recursive(i, j + 1, m, n);
}

// dp solution -> o(m*n)
int findways_dp(int i, int j, int m, int n, vector<vector<int>> &dp)
{
    // base case
    if (i == m - 1 && j == n - 1)
        return 1;
    if (i > m - 1 || j > n - 1)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];

    return dp[i][j] = findways_dp(i + 1, j, m, n, dp) + findways_dp(i, j + 1, m, n, dp);
}

// Optiomal Solution -> O(min(m,n))
int findways(int m, int n)
{
    int ans = 1;
    int N = n + m - 2;
    int R = min(m, n) - 1;

    for (int i = 1; i <= R; i++)
    {
        ans *= (N - R + i)/ i;
        cout << ans << " ";
    }

    return ans;
}

int main()
{
    int m = 3, n = 7;
    // vector<vector<int>> dp(m, vector<int>(n, -1));
    int ways = findways(m, n);
    cout << "No of ways are " << ways;
    return 0;
}