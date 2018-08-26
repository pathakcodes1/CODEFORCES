#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n,m,a,o,p;
cin>>n>>m>>a;
if(n%a==0)
    o=n/a;
else
    o=(n/a)+1;
if(m%a==0)
    p=m/a;
else
    p=(m/a)+1;
cout<<o*p;
}
