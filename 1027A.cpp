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
   while(n--)
   {   flag=0;
       cin>>m;
       cin>>s;
       for(int i=0;i<m/2;i++)
       {
           if(s[i]!=s[m-i-1]&&abs(s[i]-s[m-i-1])==1||abs(s[i]-s[m-i-1])>2)
           {
               flag=1;
               break;
           }

       }
       if(flag==1)
        cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
   }
   return 0;
}
//_4_4_3_//
