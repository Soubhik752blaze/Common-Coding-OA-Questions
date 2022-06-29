/*Questions :- Write a efficient program to find the sum of the contiguous subarray within a one-dimensional array of numbers that has the largest sum.*/
#include<bits/stdc++.h>
using namespace std;
int fact(int num)
{
    if(num<=1)
        return num;
    return num*fact(num-1);
}
//Functions for different problems
vector<vector<int>> pascal1(int row)
{
    vector<vector<int>> r(row);
    for(int i=0;i<row;i++)
        {
            r[i].resize(i+1);
            r[i][0]=r[i][i]=1;
            for(int j = 1;j<i;j++)
                r[i][j] = r[i-1][j-1] + r[i-1][j];
        }
    return r;
}

int pascal2(int r,int c)
{
    int res=1;
    for(int i=0;i<c;i++)
    {
        res *= r-i;
        res /= i+1;
    }
    return res;
}

void pascal3(int row)
{
    int col=row;
    int res=1;
    cout<<res<<" ";
    for(int i=0;i<col;i++)
    {
        res *= (row-i);
        res /= (i+1);
        cout<<res;
        cout<<" ";
    }
}
int main()
{
    int rownums=6;
    int row=3,col=0;
    vector<vector<int>> r;
    r = pascal1(rownums);
    //1stQuestion
    for (int i = 0; i < rownums; i++)
    {    for (int j = 0; j < r[i].size(); j++)
        {
            cout << r[i][j] << " ";
        }
        cout<<endl;
    }    

    //2ndQuestion
    cout<<"The number in row "<<row<<" and column "<<col<<" is :- "; 
    cout<<pascal2(row,col);

    //3rdQuestion
    cout<<endl;
    row=5;
    cout<<"The Last row is ";
    pascal3(row);
    return 0;
}


//@Soubhik_Ghosh
//TC -> o(n^2),o(n),o(n)
//SC -> o(n^2),o(1),o(n)