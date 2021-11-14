#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

vector<int>bfs(int n,vector<int>adj[]){
	vector<int>ans;
	vector<int>vis(n+1,0);
	queue<int> q;
 for(int i=1;i<=n;i++){
	 if(vis[i]==0){
		 q.push(i);
		 vis[i]=1;
		 while(!q.empty()){
			 int node = q.front();
			 ans.push_back(node);
			 for(auto x:adj[node]){
				 if(vis[x]==0){
					 q.push(x);
					 vis[x]=1;
				 }
			 }
			 q.pop();
		 }
	 }else continue;
 }
 return ans;
}

void addEdge(vector<int>adj[],int u,int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,m;
	cin>>n>>m;
	vector<int>adj[n+1];
	for(int i=0;i<m;i++){
		int u,v;
		cin>>u>>v;
		addEdge(adj,u,v);
	}

	vector<int>ans ;
	ans= bfs(n,adj);
	for(int i=1;i<=n;i++){
			for(auto x:adj[i]){
				cout<<x<<" ";
			}cout<<endl;
		}
	cout<<endl;
	cout<<"BFS = ";
	for(int i=0;i<ans.size();i++)
	cout<<ans[i]<<" ";
	
return 0;
}