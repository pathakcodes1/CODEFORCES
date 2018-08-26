#include<bits/stdc++.h>
using namespace std;
int main(){
int count=0,c=0;
string s;
cin>>s;
for(int i=0;i<s.length();i++){
    if(s[i]>=65&&s[i]<90)
        count++;
    else
        c++;

    if(count<=c)
        s[i]=tolower(s[i]);
    else
        s[i]=toupper(s[i]);

    cout<<s[i];
}
return 0;
}
