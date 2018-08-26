#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
string s;
cin>>s;
int count=0,c=0;
for(int i=0;i<n;i++){
    if(s[i]=='A')
        count++;
    else if(s[i]=='D')
        c++;
}
if(count>c)
    cout<<"Anton";
else if(count<c)
    cout<<"Danik";
else if(count==c)
    cout<<"Friendship";
return 0;
}
