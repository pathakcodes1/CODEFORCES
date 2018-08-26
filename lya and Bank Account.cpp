#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a,b;
cin>>n;
a=n/10;
b=n/100*10+n%10;

if(n>=0)
    cout<<n;

  else if (n<0){
      if(b>a)     cout<< b;
      else      cout<< a;
  }
  return 0;}
