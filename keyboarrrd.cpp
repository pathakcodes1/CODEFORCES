#include<bits/stdc++.h>
using namespace std;
int main()
{
char c;
string a="qwertyuiopasdfghjkl;zxcvbnm,./";
string s;
cin>>c>>s;
if(c=='R'){
    for(int i=0;i<s.length();i++)
        s[i]=a[a.find(s[i])-1];


}
else{
for(int i=0;i<s.size();i++)
    s[i] = a[a.find(s[i])+1];

}
cout << s;

return 0;
}
