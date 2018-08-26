#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const int N = 1<<20;
vector<int>v;
ll cnt,a[N],b[N],has[N],n,m,sum;
bool flag,f;
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
   cin>>n>>m;
   string s,t;
   cin>>s>>t;
   if(n>m+1)
    cout<<"NO";
   else{
    for(int i=0;i<n;i++)
    {   if(s[i]=='*')
        {   f=1;
            break;
        }
        if(s[i]!=t[i])
            {flag=1;
            break;}
    }
    for(int i=n-1;i>0;i--)
    {   if(s[i]=='*')
        {f=1;break;}
        if(s[i]!=t[i+(m-n)])
            {flag=1;
            break;}
    }
    if(m>n&&f==0)cout<<"NO";
    else
    {if(flag==0)
        cout<<"YES";
    else cout<<"NO";
   }
   }
   return 0;
}
//_4_4_3_//
