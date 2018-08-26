#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const int N = 1<<20;
vector<int>v;
stack<int>st;
ll cnt,a[N],b[N],has[N],n,m,sum,min1,max1;
string s,t;
bool flag;
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
   cin>>n>>m;
   cin>>s;
   for(int i=0;i<n&&m>0;i++)
   {
       if(s[i]=='(')
       {
           st.push(i);
       }
       else
       {
           a[i]++;
           a[st.top()]++;
           st.pop();
           m-=2;
       }
   }
   for(int i=0;i<n;i++)
   {
       if(a[i]==1)
       {
           cout<<s[i];
       }
   }
   return 0;
}
//_4_4_3_//

