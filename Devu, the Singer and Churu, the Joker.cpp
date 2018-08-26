#include<bits/stdc++.h>
using namespace std;
int main(){
int s,m;
cin>>s>>m;
int array[s],count=0,sum=0;
for(int i=0;i<s;i++){
    cin>>array[i];
    sum+=array[i];
}
if(sum+10*(s-1)<m)
    cout<<"-1";
else
    cout<<(m-sum)/5;
return 0;
}
