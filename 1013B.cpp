#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const int N = 1<<20;
vector<int>v;
int cnt,has[N],arr[N],b[N],k=-1;
bool flag;
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
   int n,x;
   cin>>n>>x;
   for(int i=0;i<n;i++)
   {
    int y;
    cin>>y;
    if(arr[y])k=0;
    if(k){
        if(arr[y&x]||b[y])k=1;
    }
    if(k&&k!=1){
        if(b[y&x])k=2;
    }

    arr[y]=b[y&x]=1;
   }
  cout<<k;
   return 0;
}
//_4_4_3_//
