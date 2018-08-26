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
   if(n>=m)
   {
       cout<<n-m;
   }
   else
   {
       while(n!=m)
       {
           if(n>m)
           {
               cnt+=(n-m);
               break;
           }
           else
           {
               if(m%2==1)
               {
                   m++;
                   cnt++;
               }
               else
               {
                   m/=2;
                   cnt++;
               }
           }
       }
        cout<<cnt;
   }


   return 0;
}
//_4_4_3_//

