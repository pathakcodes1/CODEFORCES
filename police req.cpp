#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int sum=0,count=0,v;
while(n--){
    cin>>v;
    sum+=v;
    if(sum<0)
    {count++;sum=0;}
}
cout<<count;
return 0;
}
