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
   for(int i=0;i<2*n;i++)
   {
       cin>>arr[i];
   }
   for(int i=0;i<2*n-1;i++)
   {
       for(int j=i+1;j<2*n;j++)
       {

       if(arr[i]!=arr[j]&&arr[j]>0&&arr[i]>0)
       {

           cnt++;

       }
       else if(arr[i]==arr[j])
       {
           arr[j]=0;
           break;
       }}
   }
   cout<<cnt;
   return 0;
}
//_4_4_3_//

