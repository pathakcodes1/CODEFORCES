#include<bits/stdc++.h>
using namespace std;
int main(){
string s,s1,s2;
int ar[26]={0},a[26]={0},flag=0;;
cin>>s>>s1>>s2;
if(s.length()+s1.length()!=s2.length())
    cout<<"NO";
else {
       for(int i=0;i<s.length();i++)
            {ar[s[i]-'A']++;}
      for(int i=0;i<s1.length();i++)
         {ar[s1[i]-'A']++;}
     for(int i=0;i<s2.length();i++)
            {a[s2[i]-'A']++;}

         for(int i=0;i<26;i++){
            if(a[i]!=ar[i])
                flag++;

         }
      if(flag==0)
       cout<<"YES";
       else cout<<"NO";
    }
    return 0;
}
