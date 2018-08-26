#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const int N = 1<<20;
vector<int>v;
ll cnt,a[N],b[N],has[N],n,m,sum,summ,sumn,min1,max1;
string s,t;
bool flag;
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
   cin>>n>>m;
   int k=n,t;
   while(n--)
   {
       cin>>max1>>min1;
       summ+=max1;
       sum+=min1;
       a[n]=max1-min1;
   }
   if(summ<=m)
   {
       cout<<"0";
   }
   else if(sum>m)
   {
       cout<<"-1";
   }
   else
   {
       sort(a,a+k,greater<ll>());
       ll diff=summ-m;
       for(ll i=0;i<k;i++)
       {
           sumn+=a[i];
           cnt++;
           if(sumn>=diff)
            break;
       }
       cout<<cnt;
   }
   return 0;
}
//_4_4_3_//
