#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,a,b;
cin>>n>>m>>a>>b;
int count=0,c=0,p=0,z;
if(n%m==0)
    count=(n/m)*b;
    else count=((n/m)+1)*b;

  c=(n/m)*b+(n%m)*a;
  p=n*a;
  z=min(count,c);
  z=min(z,p);
  cout<<z;
return 0;
}
