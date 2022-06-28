/*Question:- Sort an array of 0s, 1s and 2s.*/

#include <bits/stdc++.h>
using namespace std;

// Function that sorts the array of 0s, 1s and 2s 
void sortarray(int array[], int size)
{
	
	int low=0;
	int mid=0;
	int high=size-1;

    while(mid<=high)
		{	if(array[mid]==0)
				swap(array[low++],array[mid++]);

			else if(array[mid]==1)
				mid++;

			else if(array[mid]==2)
				swap(array[mid],array[high--]);
		}
	
}			


// Driver Function
int main()
{
	int array[] = {0,0,1,1,0,2,1,0,2};
	int N = sizeof(array) / sizeof(array[0]);
	sortarray(array,N);
	for(int i=0;i<N;i++)
		cout<<array[i]<<" ";
	return 0;
}

//@Soubhik_Ghosh
