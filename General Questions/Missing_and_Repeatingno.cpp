/*Questions :- Write a efficient program to find the missing and the repeating number within a array of numbers from 1-n */
#include<bits/stdc++.h>
using namespace std;

void findmissingrepeatingno(int arr[], int n)
{
    //x missing, y repeating
    int s1=0,reals1=0,s2=0,reals2=0;

    for(int i=0;i<n;i++)
        {
            s1+=arr[i];
            reals1+=i+1;
        }     
    int sum1=s1-reals1;                    //sum1 = x - y
    for(int i=0;i<n;i++)   
        {
            s2+=pow(arr[i],2); 
            reals2+=pow(i+1,2);
        }
    int sum2=s2-reals2;                  //sum2 = x2 - y2 = (x+y)(x-y)     
    int a = sum2/sum1;                  // a = sum2/sum1 = x + y
    cout<<"Missing no is :- "<<(a+sum1)/2<<endl;
    cout<<"Repeating no is :- "<<(a-sum1)/2;
    return ;
}

int main()
{
    int a[] = {1,3,2,2,5,4,6,7};
    int n = sizeof(a)/sizeof(a[0]);
    findmissingrepeatingno(a,n);
    return 0;
}


//@Soubhik_Ghosh
//TC -> o(n)
//SC -> o(1)