#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const int N = 1<<21;
vector<int>v;
ll cnt,a[N],b[N],has[N],n,m,sum,min1,max1;
string s,t;
bool flag;
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
   cin>>n>>m;
   for(ll i=0;i<n;i++)
   {
       cin>>a[i];
   }
   sort(a,a+n);
   if(m==0)
   {
       if(a[0]==1)
        cout<<"-1";
       else{cout<<a[0]-1;}
   }
   else{
   for(int i=0;i<n;i++)
   {
       if(a[m-1]!=a[m])
        {if(a[m-1]>0)cout<<a[m-1];
        else cout<<"-1";
        break;}
       else {cout<<"-1";break;}
   }}

   return 0;
}
//_4_4_3_//
