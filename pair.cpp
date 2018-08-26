#include<bits/stdc++.h>
using namespace std;
const int N=1<<20;
int visit[N];
int a[N];
vector<pair<int,int> >v[N];
void dfs(int s,int d){
	visit[s]=1;
	a[s]=d;
	for(int i=0;i<v[s].size();i++){
		if(!visit[v[s][i].first])
		{
		dfs(v[s][i].first,d+v[s][i].second);}

	}
}
int main(){
	int n,m;
	cin>>n>>m;
	while(m--){
		int x,y,z;
		cin>>x>>y>>z;
		v[x].push_back({y,z});
		v[y].push_back({x,z});
	}
	dfs(1,0);
	for(int i=1;i<=N;i++){
		if(a[i]!=0)
		cout<<i<<" "<<a[i]<<endl;
	}
	return 0;
}
