#include <bits/stdc++.h>
using namespace std;
const int N = 100000;
vector<int>v[N];
int visit[N],has[N];
void dfs(int s, int l){
    visit[s]=1;
    has[l]++;
   for(int i=0;i<v[s].size();i++){
    if(!visit[v[s][i]]){
        dfs(v[s][i],l+1);
    }
   }
}
int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        int x;
        cin>>x;
        v[x].push_back(i);
        v[i].push_back(x);
    }
    dfs(1,0);
    int count=0;
    for(int i=0;i<=N;i++){
        count+=has[i]%2;
    }
    cout<<count;
return 0;}

