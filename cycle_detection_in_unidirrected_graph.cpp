#include"bits/stdc++.h"
using namespace std;
 bool iscycle(int node ,vector<vector<int>>adj(n),vector<int>&vis(n+1),int parent)
 {
    vis[node]=1;
    //now itrating it's adjecency list//
    for( auto it:adj[node])
    {
        if(it!=parent)
        {
            if(vis[it])
            {
                return true;
            }
            if(!vis[it] and is cycle(it) )
        }
    }
  return false;
  
 }

 int main()
 {
    int n,m;
    cout<<"enter the nodes and edges \n";
    cin>>n>>m;
    vector<vector<int>>adj(n); //adjacency matrix//
    for(int i{0};i<m;i++)
    {
        int u,v;
        cout<<"enter the next edges\n";
        cin>>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool cycle=false;
    //making visited array//
    vector<int >vis(n+1,0);
   
   for(int i{1};i<=n;i++)
   {
     if(!vis[i]and iscycle(i,adj,vis,-1))
     {
        cycle=true;
     }
   
   if(cycle)
   {
    cout<<"cycle is present \n";
   } else{
    cout<<"cycle is not present\n";
   }


     
   }
    
 }