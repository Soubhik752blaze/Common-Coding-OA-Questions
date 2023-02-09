/*Question :- Find the duplicate number in an array of sizr N+1*/
#include <bits/stdc++.h>
using namespace std;

// Used logic of find the starting point of a cycle in linked list
// here instead of creating a linked list, we used indexes as numbers are in range 0 to n.
int findDuplicate(vector<int> &nums)
{
  int slow = nums[0];
  int fast = nums[0];
  
  do
  {
    slow = nums[slow];
    fast = nums[nums[fast]];
  } while (slow != fast);

  fast = nums[0];
  while (slow != fast)
  {
    slow = nums[slow];
    fast = nums[fast];
  }

  return slow;
}
int main()
{
  vector<int> arr;
  arr = {1, 3, 4, 2, 3};
  cout << "The duplicate element is " << findDuplicate(arr) << endl;
}


// TC -> o(n)
// SC -> o(1)