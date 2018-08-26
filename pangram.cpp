#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
string s;

cin>>s;

int h[26]={0},flag=0;
for(int i=0;i<n;i++){
    s[i]=tolower(s[i]);
    h[s[i]-'a']++;
}
for(int i=0;i<26;i++){
    if(h[i]==0)
        flag=1;
}
if(flag==1)
    cout<<"NO";
else
    cout<<"YES";
return 0;
}
