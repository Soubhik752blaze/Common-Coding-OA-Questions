/*Question:- Count the inversion pairs in given array.
Formally speaking, two elements a[i] and a[j] form an inversion pair if a[i] > a[j] and i < j */

#include <bits/stdc++.h>
using namespace std;

int merge(int arr[],int left ,int mid, int right, int temp[])
{
    int inv_count=0;
    int i = left;   //index for left subarray
    int j = mid;    //index for right subarray
    int k = left;   //index for temp subarray

    while((i<=mid-1)&&(j<=right))
    {
        if(arr[i]<=arr[j])
            temp[k++]=arr[i++];
        else
            {
                temp[k++]=arr[j++];
                inv_count+=(mid-i);
            }
    }
    while(i<=mid-1)
        temp[k++]=arr[i++];
    while(j<=right)
        temp[k++]=arr[j++];

    for(int ind=left;ind<=right;ind++)
        arr[ind]=temp[ind];
    return inv_count;
}

int inversioncount(int arr[],int start ,int end ,int temp[])
{
    int inv_count = 0;
    if(end>start)
    {
        int mid = (start+end)/2;
        inv_count += inversioncount(arr,start,mid,temp);
        inv_count += inversioncount(arr,mid+1,end,temp);

        inv_count += merge(arr,start,mid+1,end,temp);
    }
    return inv_count;
}

int main()
{
    int arr[] = {5,4,3,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp[n];
    int ans=inversioncount(arr,0,n-1,temp);
    cout<<ans;
    return 0;
}

//@Soubhik_Ghosh
//TC = O(NlogN)
//SC = O(N)


//Brute_force Algo has o(n2) complexity


