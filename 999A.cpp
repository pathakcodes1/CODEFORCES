#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const int N = 1<<20;
vector<int>v;
int cnt,arr[N],b[N],has[N];
bool flag,flag1;
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
   int n,m;
   cin>>n>>m;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=m)
        {
            cnt++;

        }
        else break;
    }
     for(int i=n-1;i>0;i--)
    {
        if(arr[i]<=m)
        {
            cnt++;

        }
        else break;
    }
    if(cnt>n)
        cout<<n;
    else
    cout<<cnt;
   return 0;
}
//_4_4_3_//

