#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const int N = 1<<20;
vector<int>v;
int cnt,a[N],b[N],has[N];
bool flag;
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
   int n,m,q,cnt1=0,mi3=0,min2=0;
   cin>>n>>m>>q;
   int w=n,e=m,r=q;
   cnt+=n/3+m/3+q/3;
   n%=3;
   m%=3;
   q%=3;
   int min1=min(n,m);
    mi3=min(min1,q);
   cnt+=mi3;
    if(w!=0&&e!=0&&r!=0)
    {

   if(n>0&&m>0)
   {
       min1=min(n,m);
       if(q>0)
       min2=min(min1,q);
       else min2=min1;
   }
   else if(n>0&&q>0)
   {

        min2=min(n,q);
   }
   else if(m>0&&q>0)
   {

       min2=min(m,q);
   }
   else if(n>0&&m==0&&q==0)min2=n;

   else if(m>0&&n==0&&q==0)min2=m;
   else if(q>0&&m==0&&n==0)min2=q;
    }
   cnt1+=min2;
   w-=min2;
   e-=min2;
   r-=min2;
   cnt1+=w/3+e/3+r/3;

   int max1=max(cnt,cnt1);
   cout<<max1;
   return 0;
}
//_4_4_3_//
