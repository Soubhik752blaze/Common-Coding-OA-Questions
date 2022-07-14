/*Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.*/

//Note:- Second condition means column wise its also sorted

#include <bits/stdc++.h>
using namespace std;

bool searchinmatrix(vector<vector<int>>& m, int k)
{
        if(m.size() == 0)
            return false;
        int r = m.size();
        int c = m[0].size();
        
        int lo = 0;
        int hi = r*c - 1;
        
        while(lo<=hi)
        {
            int mid = (lo +(hi - lo)/2);
            int n_search = mid/c;
            int m_search = mid%c;
            if(m[n_search][m_search]==k)
                return true;
            if(m[n_search][m_search]<k)
                lo=mid+1;
            else
                hi=mid-1;
        }
        return false;

}

int main()
{
    vector<vector<int>> matrix ={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target=50;
    searchinmatrix(matrix,target)?cout<<"Found":cout<<"Not Found";
    return 0;
}

//@Soubhik_Ghosh
//TC = log(nxm)
//SC = O(1)


//Brute_force Algo has o(n2) complexity


