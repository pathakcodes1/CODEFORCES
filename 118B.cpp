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
   cin>>n;
   for(int i=0;i<=n;i++)
   {
       for(int k=2*(n-i);k>0;k--)
        cout<<" ";
       for(int j=0;j<i;j++)
        cout<<j<<" ";
       for(int k=i;k>=0;k--)
        {if(k==0)
        {
            cout<<k;
            break;
        }
        cout<<k<<" ";
        }
       cout<<endl;
   }
    for(int i=1;i<=n;i++)
    {
        for(int k=2*i;k>0;k--)
        cout<<" ";
        for(int j=0;j<n-i;j++)
            cout<<j<<" ";
        for(int k=n-i;k>=0;k--)
           {if(k==0)
        {
            cout<<k;
            break;
        }
        cout<<k<<" ";
        }
       cout<<endl;
    }
   return 0;
}
//_4_4_3_//
