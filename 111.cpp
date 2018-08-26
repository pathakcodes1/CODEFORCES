#include <bits/stdc++.h>

using namespace std;

vector <int> adj[200005];

bool vis[200005];
int cnt[200005], k=0;
map<int, int> mp, mp1;

void dfs(int s) {
    vis[s] = 1;

    mp1[s] = k;
    mp[k] = s;
    k++;
    for(int i = 0;i < adj[s].size(); i++)    {
        if(!vis[adj[s][i]])
             dfs(adj[s][i]);
             cnt[s] += cnt[adj[s][i]];
    }
}
    int main()
    {
        int m, n, i, a, b, d, in, q;
        cin >> n >>q;
        cnt[1] = 1;
        for(i = 2; i <= n; i++)
        {
            cin >>a;
            cnt[i] = 1;
            adj[a].push_back(i);
        }

        dfs(1);

        while(q--)
        {
            cin >>a>>b;
            cout<<cnt[a]<<endl;
        }
        return 0;
    }
