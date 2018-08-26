#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   int a[n],s[n-1],d[n-2],sum=0,sum1=0,sum2=0;
   for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
   }
   for(int i=0;i<n-1;i++){
    cin>>s[i];
    sum1+=s[i];
   }for(int i=0;i<n-2;i++){
    cin>>d[i];
    sum2+=d[i];
   }
   cout<<sum-sum1<<endl;

   cout<<sum1-sum2<<endl;
   return 0;
}
