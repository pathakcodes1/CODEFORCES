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
   int n;
   cin>>n;
   for(int i=0;i<n-1;i++)
   {
       cin>>arr[i];
   }
   int a,b;
   cin>>a>>b;
   for(int i=a-1;i<b-1;i++)
   {
       cnt+=arr[i];
   }
   cout<<cnt;
   return 0;
}
//_4_4_3_//

