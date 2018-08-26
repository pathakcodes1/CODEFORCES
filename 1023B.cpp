#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const int N = 1<<20;
vector<int>v;
ll cnt,a[N],b[N],has[N],n,m,sum,min1,max1;
bool flag;
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
   cin>>n>>m;
   if(m<=n)
   {
       cnt=(m-1)/2;
   }
   else if(m>n&&m<2*n)
   {
       cnt=(2*n-m+1)/2;
   }
   else cnt=0;
   cout<<cnt;
   return 0;
}
//_4_4_3_//
