#include <bits/stdc++.h>
using namespace std;
int main(){
  string s1;
  cin>>s1;
  string s2="hello";
  int i=0,j=0;
  while(i<s1.length()&&j<s2.length()){
    if(s1[i]==s2[j])
         j++;
    i++;
  }
  if(j==s2.length())
  cout<<"YES";
  else
  cout<<"NO";
}
