#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const int N = 1<<20;
vector<int>v;
ll cnt,a[N],b[N],has[N],n,m,sum,min1,max1;
string s,t;
bool flag;
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
   cin>>n>>m;
   if(m>n)cout<<"-1";
   else
   {
       ll k=ceil(n/2.0);
       for(ll i=k;i<=n;i++)
       {
           if(i%m==0)
            {cout<<i;
            break;}
       }
   }
   return 0;
}
//_4_4_3_//
