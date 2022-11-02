#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int n,m;
    cout<<"enttet the nodes and edges for finding the topological sorting  \n";
    cin>>n>>m;
    vector<vector<int>>adj(n);
    vector<int>vis(n,0);
    stack<int>st;
    for( int i{1};i<=n;i++)
    {
        cout<<"enter the  other edges\n";
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        
    }

  
    
 }