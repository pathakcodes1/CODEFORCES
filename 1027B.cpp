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
   while(m--)
   {
    ll x,y;
    cin>>x>>y;
    sum=x+y;
    if(!(n&1))
    {   cnt=0;
        cnt+=(n/2)*(x-1);
        cnt+=ceil(y/2.0);
    if(!(sum&1))
    {
      cout<<cnt<<endl;
    }
    else
    {
        cnt+=n*n/2;

        cout<<cnt<<endl;
    }
    }
    else
    {   cnt=0;
      if(!(sum&1))
    {
       if(x&1)
       {
          cnt+=x/2*n+1+(y-1)/2;
       }
       else
       {
           cnt+=(x/2)*(n/2+1)+(x/2-1)*(n/2)+(y-2)/2+1;
       }
    }
    else
    {
       if(x&1)
       {
           cnt+=n*n/2+1+x/2*n+1+(y-2)/2;
       }
       else
       {
           cnt+=n*n/2+1+x/2*(n/2)+(x/2-1)*(n/2+1)+1+(y-1)/2;
       }
    }
    cout<<cnt<<endl;
    }
   }

   return 0;
}
//_4_4_3_//
