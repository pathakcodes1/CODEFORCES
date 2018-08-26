#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
for(int i=0;i<s.length();i++){
        s[i]=tolower(s[i]);
    if(s[i]!=101&&s[i]!=105&&s[i]!=111&&s[i]!=117&&s[i]!=97&&s[i]!=121)
        cout<<"."<<s[i];


}
return 0;
}
