/*Question:- Sort an array of 0s, 1s and 2s.*/
#include <bits/stdc++.h>
using namespace std;

// DUTCH NATIONAL FLAG ALGORITHM
// 3 pointer use which segregates 0s, 1s and 2s
// first pointer keeps segregating 0s to the left
// second pointer keeps segregating 2s to the right
// The 1s automatically thus gets sorted
void sortarray(int array[], int size)
{

	int low = 0;
	int mid = 0;
	int high = size - 1;

	while (mid <= high)
	{
		// if found a 0, segregate it to left
		if (array[mid] == 0)
		{
			swap(array[low], array[mid]);
			low++;
			mid++;
		}

		// if encountered 1, then nothing to do
		else if (array[mid] == 1)
		{
			mid++;
		}

		// if encountered 2, segregate it to right
		else if (array[mid] == 2)
		{
			swap(array[mid], array[high]);
			high--;
		}
	}
}

// Driver Function
int main()
{
	int array[] = {0, 0, 1, 1, 0, 2, 1, 0, 2};
	int N = sizeof(array) / sizeof(array[0]);
	sortarray(array, N);
	for (int i = 0; i < N; i++)
		cout << array[i] << " ";
	return 0;
}

// TC -> o(n)
// SC -> o(1)