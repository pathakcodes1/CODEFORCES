#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
int q,w,e,r,s,t;
q=a*b*c;
w=(a+b)*c;
e=a+(b*c);
r=a*(b+c);
s= a+b+c;
t=(a*b)+c;
int max=q;
if(max<w)
    max=w;
if(max<e)
    max=e;
if(max<r)
    max=r;
    if(max<s)
    max=s;
    if(max<t)
    max=t;
cout<<max;
return 0;

}

