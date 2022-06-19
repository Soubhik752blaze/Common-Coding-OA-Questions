#include<bits/stdc++.h>
using namespace std;

int parent[100];
int ran[100];
int n=7;

void makeset()
{
    for(int i=1;i<=n;i++)
    {
        parent[i]=i;
        ran[i]=0;
    }
}

int findpar(int node)
{
    if(node==parent[node])
        return node;

    return parent[node] = findpar(parent[node]);

}

void unio(int u, int v)
{
    u=parent[u];
    v=parent[v];

    if(ran[u]>ran[v]) 
        parent[v]=u;
    else if (ran[u]<ran[v]) 
        parent[u]=v;
    else{
        parent[v]=u;
        ran[u]++;
    }
}

int main()
{
    makeset();
    int m=5;
    while(m--){
        int u,v;
        cin>>u>>v;
        unio(u,v);
    }

    cout<<findpar(7);
    cout<<findpar(2);
    return 0;


}



