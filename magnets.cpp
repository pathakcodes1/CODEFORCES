#include<bits/stdc++.h>
using namespace std;
int main(){
int n,count=1,prev,curr;
cin>>n;
cin>>prev;
n-=1;
while(n--){
    cin>>curr;
    if(prev!=curr)
        count++;
    prev=curr;
}
cout<<count;
return 0;
}
