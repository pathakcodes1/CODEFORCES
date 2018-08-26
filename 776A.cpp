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
   string s1,s2;
   cin>>s1>>s2;
   cout<<s1<<" "<<s2<<endl;
   int n;
   cin>>n;
   while(n--)
   {
      string s3,s4;
      cin>>s3>>s4;
      if(s3==s1){cout<<s2<<" ";
      s1=s4;}
      else {cout<<s1<<" ";
      s2=s4;}

       cout<<s4<<endl;
   }
   return 0;
}
//_4_4_3_//

