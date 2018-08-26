#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int count=0;
for(int i=0;i<s.length();i++){
    if(s[i]>=65&&s[i]<=90)
        count++;
        }
if(count==s.length()){
    for(int i=0;i<s.length();i++)
        {s[i]=tolower(s[i]);}

}
else if(count==s.length()-1&&s[0]>96){
    s[0]=toupper(s[0]);
    for(int i=1;i<s.length();i++){
        s[i]=tolower(s[i]);

    }

}
for(int i=0;i<s.length();i++){
        cout<<s[i];
    }
return 0;
}
