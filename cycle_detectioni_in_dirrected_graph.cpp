#include"bits/stdc++.h";
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the no. of  nodes and edges\n";
  cin>>n>>m;
  vector<vector<int>>adj(n+1);//adjacency matrix //
  vector<int>vis(n+1,0); //visited list//

  for( int i{0};i<m;i++)
  {
    cout<<"enter the next edges dirrection\n";
    int u,v;
    cin>>u>>v;
   adj[u].push_back(v);
  }
  bool iscycle(int node ,vector<vector<int>>&adj,vector<int>&vis,vector<int>&stack )
{
   
stack[node]=1;
if(!vis[node])
{
    vis[node]=1;
    for(auto it:adj[node])
    {
        if(!vis[node] and iscycle(it ,adj,vis,stack))
        {
             return true;
        }
        if(stack[] )
    }
}
}
bool cycle=false;

  for( int i{1};i<=n;i++)
  {
    if(!vis[i] and iscycle(i,vis,adj,stack) )
    {
        cycle=true;
    }
  }
  if(cycle)
  {
    cout<<"cycle is present \n";
  }
  else{
    cout<<"cycle is not present \n";
  }
}