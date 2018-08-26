#include<bits/stdc++.h>
using namespace std;
int main(){
int n;cin>>n;int count=0,val,prev,max=0;
cin>>prev;
n-=1;
while(n--){
    cin>>val;
    if(val>prev){count++;}
    else if(count>max)
    {max=count;
    count=0;}
    prev=val;
}
cout<<max;
return 0;
}
