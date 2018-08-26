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
   string s;
   cin>>s;
   ll sum=0,sum1=0;
   for(int i=0;i<s.length();i++)
   {
    sum+=(int)s[i]-48;;
   }
    if(sum<10)cout<<0;
   else
   {while(sum>0)
   {    cnt++;
       sum/=10;
       sum1+=sum;
   }
   cout<<cnt;}
   return 0;
}
//_4_4_3_//
