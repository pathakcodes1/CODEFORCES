#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const int N = 1<<20;
vector<int>v;
ll cnt,a[N],b[N],has[N],n,m;
bool flag;
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
   cin>>n>>m;
    cout<<n+m-1<<endl;
   for(int i=1;i<=m;i++)
   {
       cout<<"1"<<" "<<i<<endl;
   }
   for(int i=2;i<=n;i++)
   {
       cout<<i<<" "<<m<<endl;
   }

   return 0;
}
//_4_4_3_//
