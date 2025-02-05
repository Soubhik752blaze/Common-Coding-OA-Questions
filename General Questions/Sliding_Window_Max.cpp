/*Question :-You are given an array of integers nums,there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position.

Return the max sliding window.*/

#include <bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int> &nums, int k)
{
  deque<int> dq;
  vector<int> ans;
  for (int i = 0; i < nums.size(); i++)
  {
    if (!dq.empty() && dq.front() == i - k)
      dq.pop_front(); // since index is stored in the dequeue

    while (!dq.empty() && nums[dq.back()] <= nums[i]) // makes sure always the greatest in kth window is at front
      dq.pop_back();

    dq.push_back(i);
    if (i >= k - 1)
      ans.push_back(nums[dq.front()]);
  }
  return ans;
}
int main()
{
  int i, j, n, k = 3, x;
  vector<int> arr{4, 0, -1, 3, 5, 3, 6, 8};
  vector<int> ans;
  ans = maxSlidingWindow(arr, k);
  cout << "Maximum element in every " << k << " window " << endl;
  for (i = 0; i < ans.size(); i++)
    cout << ans[i] << " ";
  return 0;
}

//@Soubhik_Ghosh
// TC -> o(N)
// SC -> o(k)

// BF -> o(N*k) = o(n^2)