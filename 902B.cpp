#include<bits/stdc++.h>
using namespace std;
const int N=1<<20;
vector<int>v[N];
int visit[N],a[N],b[N];
int k;
void dfs(int s)
{   visit[s]=1;

    for(int i=0;i<v[s].size();i++)
    {       b[v[s][i]-1]=a[s-1];
        if(!visit[v[s][i]])
        {
            dfs(v[s][i]);
        }
    }
}
int main()
{   int n,x,cnt=0;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        cin>>x;
        v[x].push_back(i);

    }

    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }

    for(int i=0;i<n;i++)
    {
        if(b[i]!=a[i])
        {   cnt++;
            dfs(i+1);
            memset(visit,0,N);}
    }
    cout<<cnt;
        return 0;
}
