#include<bits/stdc++.h>
using namespace std;
int main(){
int n,t,sum=1;
cin>>n>>t;
int array[n];
for(int i=1;i<=n;i++){
    cin>>array[i];}
    while(sum<t){
        sum+=array[sum];
    }
    if(sum==t)
        cout<<"YES";
    else
    cout<<"NO";

   return 0;
}
