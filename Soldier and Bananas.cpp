#include<bits/stdc++.h>
using namespace std;
int main(){
int k,n,w;
cin>>k>>n>>w;
int count=0,ans=0;
count=k*(w*(w+1)/2)-n;
if(count>0){
    ans=count;
}
else ans=0;
cout<<ans;
return 0;
}
