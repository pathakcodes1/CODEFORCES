#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a=0,count=0;
cin>>n;
string s,s1;
cin>>s>>s1;
for(int i=0;i<n;i++){
    a=abs(s[i]-s1[i]);
    if(a<=5)
        count+=a;
    else count+=(10-a);
}
cout<<count;
}
