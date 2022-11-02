#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"the adjacency matrix for a graph with weighted edges\n";
   
     int m,n;  //n-for nodes  and m-for edges //
     cin>>m>>n;
     vector<int>adj[n+1];
    
     for(int i{0};i<n;i++)
     {
        cout<<"enter the next edges\n";
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
          
        
     }
     cout<<"the adjecency matrix are\n";
for(int i{0};i<n;i++)
{
    for(int j{i};j<n;j++)
   {
    cout<<adj[i][j]<<" ";
   }
}
     return 0;


    
}