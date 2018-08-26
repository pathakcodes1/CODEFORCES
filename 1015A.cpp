#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const int N = 1<<20;
vector<int>v;
int cnt,arr[N],b[N],has[N];
bool flag;
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
   int n,m;
   cin>>n>>m;
   while(n--)
{
    int l,r;
 cin>>l>>r;
 for(int i=l;i<=r;i++)
 {
     has[i]++;
 }
}
for(int i=1;i<=m;i++)
{
    if(has[i]==0)
    cnt++;
}
cout<<cnt<<endl;
for(int i=1;i<=m;i++)
{

    if(has[i]==0)
    cout<<i<<" ";
}

   return 0;
}
//_4_4_3_//
