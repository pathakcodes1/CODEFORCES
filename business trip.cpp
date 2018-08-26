#include<bits/stdc++.h>
using namespace std;
int main(){
int n,array[12],count=0,sum=0;
cin>>n;
for(int i=0;i<12;i++){
    cin>>array[i];
}
sort(array,array+12,greater<int>());
if(n==0)
    cout<<0;
else{
for(int i=0;i<12;i++){
    sum+=array[i];
    if(sum>=n)
       {cout<<i+1;
    break;}
}
if(sum<n)
    cout<<"-1";
}
return 0;
}
