#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int s2=0,s1=0,k=0,o=0,d;
int l=s.length();
if(l%2==1){
    l=l+1;
    for(int i=0;i<l/2;i++)
        cout<<"4";
    for(int j=l/2;j<l;j++)
        cout<<"7";
}
else{
for(int i=0;i<s.length();i++){
    if(s[i]=='4')
        s2++;
    else if(s[i]=='7')
        s1++;
}
if(s2==s1&&s2+s1==s.length())
{for(int i=0;i<s.length();i++)
cout<<s[i];}
else
{
for(int i=0;i<l;i++){
    if(s[i]==5||s[i]==6)
    d=i;
    s[i]='7';
    break;

}
for(int i=0;i<d;i++){
    if(s[i]=='4')
        k++;
    else o++;
}
for(int j=d+1;j<(n-d+1)/2;j++)
    s[j]=='4';
for(int j=(d+n-1)/2;j<n;j++)
    s[j]=='7';


}}
return 0;
    }
