#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int o,p;
if(n%2==0)
   {

   o=n/2;
cout<<o*m;}
if(n%2!=0)
   {

    o=(n/2);
    cout<<(o*m)+m/2;}

return 0;
}
